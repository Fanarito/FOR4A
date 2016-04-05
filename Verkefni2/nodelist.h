struct Node
{
  char data[45];
  Node *left;
  Node *right;
};

class NodeList
{
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
  Node NodeList::find(char d[45]);
  Node getNext();
  Node getPrevious();
  bool NodeList::isRoot(Node n);
  bool NodeList::isLast(Node n);
  void insert(Node n, Node *left);
  char* getCurrentData();
};
