//this file is for Class Node for mine Implementation of List
//class Node{
//	public:
//		Node*upcoming;
//		int data;
//		
//};
class Node{
	public:
		Node*upcoming;
		int data;
		int key;
		Node();
		Node(int ke,int dat);
};
//class LinkedList{
//	public:
//		Node*head;
//		LinkedList();
//		LinkedList(Node*No);
//		Node*SearchNode(int number);
//};

class LinkedList{
	public:
		Node*head;
		LinkedList();
		LinkedList(Node*No);
		Node*SearchNode(int number);
		//apending
		void Append(Node *N);
		//inserting at  the start of the list 
		void NodePrepending(Node* N);
		//inserting a node after particular node in the list
		void InsertAfterNode(Node *N,int ke);
		void DeleteByValue(int ke);
		void update(int p, int ke) ;
		void printList();
};
