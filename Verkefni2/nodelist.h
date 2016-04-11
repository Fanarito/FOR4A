#pragma once
struct Node {
	int data;
	Node *prev;
	Node *next;
};

class NodeList {
private:
	Node *nodelist;
	Node *first;
	Node *last;
	Node *current;

public:
	NodeList();
	NodeList(Node n);
	void add(Node n);
	void removeLast();
	Node find(int number);
	Node getNext();
	Node getPrevious();
	bool isRoot(Node n);
	bool isLast(Node n);
	void insert(Node n, Node *left);
	int *getCurrentData();
	void setCurrentData(int number);
	void getAll();
};

