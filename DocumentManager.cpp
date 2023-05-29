#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int licence_limit) {
  document newDocument = {
      .name = name, .document_id = id, .licence_limit = licence_limit};
  std::vector<document>::iterator it = documents.begin();
  while (it < documents.end() && (*it).document_id < id) it++;
  documents.insert(it, newDocument);
}

void DocumentManager::addPatron(int patron_id) {
  std::vector<int>::iterator it = patrons.begin();
  while (it < patrons.end() && (*it) < patron_id) it++;
  patrons.insert(it, patron_id);
}

int DocumentManager::search(std::string name) {
  for (int i = 0; i < documents.size(); i++) {
    if (documents.at(i).name == name) return documents.at(i).document_id;
  }
  return 0;
}

bool DocumentManager::borrowDocument(int document_id, int patron_id) {
  if (!patron_exists(patron_id)) return false;  // O(log(K)) {number of patrons}
  document* documentToBorrow =
      binary_search(document_id);  // O(log(n)) {number of documents}
  if (documentToBorrow == nullptr) return false;
  if (documentToBorrow->borrowed_by.size() >= documentToBorrow->licence_limit)
    return false;
  for (int i = 0; i < documentToBorrow->borrowed_by.size();
       i++) {  // O(b) {number of borrowers}
    if (documentToBorrow->borrowed_by.at(i) == patron_id) return false;
  }
  documentToBorrow->borrowed_by.push_back(patron_id);  // O(1)
  return true;
}

void DocumentManager::returnDocument(int document_id, int patron_id) {
  document* documentToBorrow =
      binary_search(document_id);  // O(log(n)) {number of documents}
  if (documentToBorrow == nullptr) return;
  for (int i = 0; i < documentToBorrow->borrowed_by.size();
       i++) {  // O(b) {number of borrowers}
    if (documentToBorrow->borrowed_by.at(i) == patron_id) {
      documentToBorrow->borrowed_by.at(i) =
          documentToBorrow->borrowed_by.back();
      documentToBorrow->borrowed_by.pop_back();
    }
  }
}

document* DocumentManager::binary_search(int document_id) {
  int low = 0;
  int high = documents.size();
  while (high != low + 1) {
    int mid = (high + low) >> 1;
    int currentDocumentID = documents.at(mid).document_id;
    if (currentDocumentID > document_id)
      high = mid;
    else if (currentDocumentID < document_id)
      low = mid;
    else
      return &documents.at(mid);
  }
  return nullptr;
}

bool DocumentManager::patron_exists(int patron_id) {
  int low = 0;
  int high = patrons.size();
  while (high != low + 1) {
    int mid = (high + low) >> 1;
    int currentPatronID = patrons.at(mid);
    if (currentPatronID > patron_id)
      high = mid;
    else if (currentPatronID < patron_id)
      low = mid;
    else
      return true;
  }
  return false;
}