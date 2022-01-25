#include<iostream>
#include"List.h"
//this file is for Class Node for mine Implementation of List
using namespace std;
        Node::Node(){
			key=0;
			upcoming=NULL;
			data=0;
		}
		Node::Node(int ke,int dat){
			this->key=ke;
			this->data=dat;
		}
		LinkedList::LinkedList(){
		head=NULL;
		cout<<"List ok"<<endl;
		}
		LinkedList::LinkedList(Node*No){
			this->head=No;		
		}
		Node*LinkedList::SearchNode(int number){
			Node* ptr=head;
			Node* temp=NULL;
			while(ptr!=NULL){
				if(ptr->key==number){
					temp=ptr;
				}
				ptr=ptr->upcoming;
			}
		}
		//apending
		void LinkedList::Append(Node *N){
			if(SearchNode(N->key)==NULL){
				if(head==NULL){//no other nodes except head
				head=N;	
				}else{
					Node* ptr=head;
					while(ptr->upcoming!=NULL){
						ptr=ptr->upcoming;
					}
					ptr->upcoming=N;
					cout<<"Node Succesfully appended"<<endl;
				}
			
			}else{
				cout<<"Error the given Node already exists, value: "<<N->key<<" Try something else"<<endl;
			
			}
		}
		//inserting at  the start of the list 
		void LinkedList::NodePrepending(Node* N){
			if(SearchNode(N->key)==NULL){
				N->upcoming=head;
				head=N;
				
			}else{
				cout<<"Error the given Node already exists, value: "<<N->key<<" Try something else"<<endl;
			}
		}
		void LinkedList::InsertAfterNode(Node *N,int ke){
			Node*ptr=SearchNode(ke);//node exists if its not NULL
			if(ptr!=NULL){
				if(SearchNode(N->key)==NULL){
					cout<<"Node Inserted "<<endl;
					N->upcoming=ptr->upcoming;
					ptr->upcoming=N;
				}else{
					cout<<"Node already exists"<<endl;
				}
			}else{
				cout<<"Error no such Node "<<endl;
			}
		}
		void LinkedList::DeleteByValue(int ke){
			if(head==NULL){
				cout<<"List is already empty"<<endl;
			}else if(head!=NULL){
				if(head->key==ke){
					head=head->upcoming;
					cout<<"Node unliked"<<endl;
				}else{
					Node *previus=head;
					Node*temp=NULL;
					Node*current=head->upcoming;
					while(current!=NULL){
						if(current->key!=ke){
						previus=previus->upcoming;
						current=current->upcoming;	
						}else{
							temp=current;
							current=NULL;
						}
					}
					if(temp==NULL){
						cout<<"Node with given key value doesnt exists"<<endl;
					}else{
						previus->upcoming=temp->upcoming;
						cout<<"Node Unlinked"<<endl;
					}
				}
			}
		}
		void LinkedList::update(int p, int ke) {
			Node * ptr = SearchNode(ke);
			 if (ptr == NULL) {
			 	 cout << "Node Doesn't exist with key value : " << ke << endl;
				  } else {
				  ptr -> data = p;
				   cout << "Node Data Updated Successfully" << endl;
				   }
				}
		void LinkedList::printList() {
		 if (head == NULL) {
		 cout << "No Nodes in Singly Linked List";
		  } else {
		   cout << endl << "Singly Linked List Values : ";
		    Node * temp = head;
			while (temp != NULL) {
			 cout << "(" << temp -> key << "," << temp -> data << ") --> ";
			 temp = temp -> upcoming;
      }
    }

  }


