#include "stddef.h"
#include "nodelist.h"

#include <iostream>
using namespace std;

NodeList::NodeList() {
  // Færibreytulaus smiður sem býr til nýjan NodeList og og setur eitt Node í
  // listann í listann.
  // Hér þarf einnig að muna að setja pointerana first,last og current :-)
  // Data fyrir þetta fyrsta node er 'Root';
  // Dæmi:  nodeList = new Node[10];
  Node n;
  n.data = 1;
  current = &n;
  first = &n;
  last = &n;
  nodelist = &n;
  cout << first->data << endl;
};
NodeList::NodeList(Node n) {
  // Sama og í færibreytulausa smiðnum, nema að núna er Node sent inn sem
  // færibreyta.
  current = &n;
  first = &n;
  last = &n;
};
void NodeList::add(Node n) {
  // Bætir nýju Node aftast í listann.
  n.prev = last;
  cout << last->data << endl;
  last->next = &n;
  last = &n;
  cout << last->prev->next->data << endl;
  current = &n;
}
void NodeList::removeLast() {
  // Eyðir aftasta Node í listanum.
  last = last->prev;
  current = last->prev;
  delete last->next;
}
Node NodeList::find(int number) {
  // Leitar að Node sem inniheldur ákveðinn texta í data breytunnni.
  current = first;
  cout << first->data << endl;
  cout << current->data << endl;
  while (current->data != number && current->next) {
    current = current->next;
    cout << current->data << endl;
  }
  return *current;
}
Node NodeList::getNext() {
  // Skilar næsta Node í listanum(þaðan sem listinn er staddur).
  return *current->next;
};
Node NodeList::getPrevious() {
  // Skilar fyrra Node í listanum(þaðan sem listinn er staddur).
  return *current->prev;
};
bool NodeList::isRoot(Node n) {
  // Ef Node sem sent er inn sem færibreyta er fremst í listanum(root/head) þá
  // skilar fallið true, annars false.
  if (first == &n)
    return true;
  else
    return false;
};
bool NodeList::isLast(Node n) {
  // Ef Node sem sent er inn sem færibreyta er aftast í listanum þá sr skilað
  // true. Annars false.
  if (last == &n) {
    return true;
  } else {
    return false;
  }
};
void NodeList::insert(Node n, Node *left) {
  // Setur n í listann "fyrir aftan" left. Ef left er EKKI aftast þá þarf að
  // tengja
  // það sem á eftir kemur við þann nýja(right).
  if (isLast(*left)) {
    last->next = &n;
  } else {
    current = left;
    current->prev = &n;
    first = &n;
    first->next = current;
  }
};
int *NodeList::getCurrentData() {
  // skilar gögnunum í current Node.
  return &current->data;
};
void NodeList::setCurrentData(int number) {
  // setur "gögn" í current Node.
  current->data = number;
};
