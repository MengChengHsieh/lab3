#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	string num_cow,s;
	ifstream inFile("input.txt",ios::in);
	if(!inFile){
		cerr<<"Failed!"<<endl;
		exit(1);
	}
	getline(inFile,num_cow);
  	//cout<< num_cow <<endl;
	int size;
	istringstream(num_cow)>>size;
	
	int iarr[size];
	int i = 0;
	while(inFile){
		getline(inFile,s);
		istringstream(s)>>iarr[i];
		i++;
	}
	vector<int> v(size);
	for(int i = 0 ;i<size;++i){
		v.at(i) = iarr[i];
		//cout<<v.at(i)<<" ";
	}
	sort(v.begin(), v.end());
	int sum;
	for(int i = size-5;i<size;++i){
		sum+= v.at(i);
	}
	cout<< sum <<endl;

}
