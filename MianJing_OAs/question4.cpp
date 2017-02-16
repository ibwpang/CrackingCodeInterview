#include<string>
#include<vector>
#include<iostream>
using namespace std;

int findMatchPair(const string& input){
	int res = -1;
	vector<char> s;
	for(int i=0;i<input.size();i++){
		if(!isalpha(input.at(i))){
			break;
		}
		if(isupper(input.at(i))){
			s.push_back(input.at(i));
		}
		else{
			if(s.empty()){
				break;
			}
			else{
				if(s.back()==toupper(input.at(i))){
					res=i;
					s.pop_back();
				}
				else{
					break;
				}
			}
		}
	}
	return res;
}

int main(){
	int t = findMatchPair("ABCDdca");
	cout<<t;
}

