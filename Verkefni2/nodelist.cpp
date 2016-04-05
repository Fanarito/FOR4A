NodeList::NodeList()
{
	// Færibreytulaus smiður sem býr til nýjan NodeList og og setur eitt Node í listann í listann.
	// Hér þarf einnig að muna að setja pointerana first,last og current :-)
	// Data fyrir þetta fyrsta node er 'Root';
	// Dæmi:  nodeList = new Node[10];
  nodeList = new Node[50];
  Node node;
  node.data = 'a';
  this.nodelist = nodeList;
};
NodeList::NodeList(Node n)
{
	// Sama og í færibreytulausa smiðnum, nema að núna er Node sent inn sem færibreyta.
};
void NodeList::add(Node n)
{
	// Bætir nýju Node aftast í listann.
}
void NodeList::removeLast()
{
	// Eyðir aftasta Node í listanum.
}
Node NodeList::find(char dat[45])
{
	// Leitar að Node sem inniheldur ákveðinn texta í data breytunnni.
}
Node NodeList::getNext()
{
	// Skilar næsta Node í listanum(þaðan sem listinn er staddur).
};
Node NodeList::getPrevious()
{
	// Skilar fyrra Node í listanum(þaðan sem listinn er staddur).
};
bool NodeList::isRoot(Node n)
{
	// Ef Node sem sent er inn sem færibreyta er fremst í listanum(root/head) þá skilar fallið true, annars false.
};
bool NodeList::isLast(Node n)
{
	// Ef Node sem sent er inn sem færibreyta er aftast í listanum þá sr skilað true. Annars false.
};
void NodeList::insert(Node n, Node *left)
{
	// Setur n í listann "fyrir aftan" left. Ef left er EKKI aftast þá þarf að tengja
	// það sem á eftir kemur við þann nýja(right).
};
char* NodeList::getCurrentData()
{
	// skilar gögnunum í current Node.
};
void NodeList::setCurrentData(char str[45])
{
	// setur "gögn" í current Node. 
};
