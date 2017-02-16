#include<iostream>
#include<string>
#include<map>

using namespace std;

char getChar(string s){
	
	map<char, int> map;
	for(int i=0; i<s.size();i++){
		map[s.at(i)]++;
		if(map[s.at(i)]>1){
			return s.at(i);
		}
	}
	return ' ';
}

int main(){
	cout<<getChar("abcdefghiGklmnopqrstccb");
	return 0;
}

 
