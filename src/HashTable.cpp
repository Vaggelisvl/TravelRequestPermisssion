#include"HashTable.h"
using namespace std;
HashTable::HashTable(int bucket){
	this->NumOfBuckets=bucket;
	arr=new LinkedList[this->NumOfBuckets];
}
void HashTable::Insert(int k){
	Node *N=new Node(0,k);
	int index;
	index=Hash(k);
	arr[index].Append(N);
}
void HashTable::Display(){
	 for (int i = 0; i < this->NumOfBuckets; i++) { 
    cout << i; 
    cout<<" ";
	cout<<&arr[i] ;
      cout << " --> " ; 
    cout << endl; 
  } 
}
