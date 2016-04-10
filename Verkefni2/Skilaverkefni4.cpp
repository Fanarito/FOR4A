#include "nodelist.h"
#include <iostream>
using namespace std;


int main() {
  NodeList thing = NodeList();
  cout << *thing.getCurrentData() << endl;

  for (int i = 2; i < 10; i++) {
    Node n = Node();
    n.data = i;
    thing.add(n);
    cout << *thing.getCurrentData() << endl;
  }

  cout << "--------" << endl;
  cout << thing.find(5).data << endl;

  return 0;
}
