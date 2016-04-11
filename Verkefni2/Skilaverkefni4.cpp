#include "stdafx.h"
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
		if (i % 5 == 0)
		{
			Node buffer = Node();
			buffer.data = 100;
			thing.insert(buffer, &n);
		}
	}

	cout << "--------" << endl;
	char c;
	cin >> c;

	return 0;