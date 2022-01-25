#include<iostream>
#include "List.h"
#include"Hash_function.h"
class HashTable{
	public:
		HashTable(int bucket);
		void Insert(int key);
		void IDelete(int key);
		void Display();
	private:
		int NumOfBuckets;
		LinkedList *arr;
};
