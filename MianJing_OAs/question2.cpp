#include<iostream>

using namespace std;

int main(){
	int num;
	int a,b,c;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>a>>b>>c;
		if(a<=0||b<=0||c<=0||a+b<=c||b+c<=a||a+c<=b){
			cout<<"Illegal"<<endl;
			continue;
		}
		else if(a==b&&b==c&&a==c){
			cout<<"Equilateral"<<endl;
		}
		else if(a==b||b==c||a==c){
			cout<<"Isosceles"<<endl;
		}
		else{
			cout<<"Other kinds"<<endl;
		}
	}
	return 0;
}

