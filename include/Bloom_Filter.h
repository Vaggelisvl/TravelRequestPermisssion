#include<iostream>

using namespace std;
class BloomFilter{
	public:
		BloomFilter();
		bool Search(string Str);
		void InsertInto(string Str);	
	private:
		bool Bloom[100000];
		int  Arr=100000;	
};


