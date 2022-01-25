#include"Bloom_Filter.h"
#include"Hash_function.h"
BloomFilter::BloomFilter(){
	int i ;
	cout<<"Bloom ok!"<<endl;
	for (i=0;i<99999;i++){
		this->Bloom[i]=false;
	}
	
}
bool BloomFilter::Search(string Str){
	int hash1,hash2,hash3;
	hash1=djb2(Str);
	hash2=sdbm(Str);
	hash3=hash_i(Str,5);
	 if (this->Bloom[hash1]&&this->Bloom[hash2]){
	 	if(this->Bloom[hash3]){
	 		cout<<"Element may exist"<<endl;
	 		return true;
		 }
	 }else{
	 	cout<<"Element doesn't exist"<<endl;
	 	return false;
	 }
}
void BloomFilter::InsertInto(string Str){
	if(!(Search(Str))){	
	}
	int hash1,hash2,hash3;
	hash1=djb2(Str);
	this->Bloom[hash1]=true;
	hash2=sdbm(Str);
	this->Bloom[hash2]=true;
	hash3=hash_i(Str,5);
	this->Bloom[hash3]=true;
	cout<<"Person named:"<<Str<<endl;
}

