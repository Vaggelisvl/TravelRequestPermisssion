#include<iostream>
#include<string>
#include"Bloom_Filter.h"
#include <fstream>
using namespace std;

 
 
 int main(){
// 	string line;
//  ifstream myfile( "example.txt" );
//  if (myfile)  // same as: if (myfile.good())
//    {
//    while (getline( myfile, line ))  // same as: while (getline( myfile, line ).good())
//      {
//      
//      }
//    myfile.close();
//    }
//  else cout << "Null File\n";
//
//  return 0;

BloomFilter *B=new BloomFilter();
string name ="Vaggelis";
B->InsertInto(name);
  }
 
