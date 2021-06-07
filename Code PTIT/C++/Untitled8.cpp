#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<sstream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int i;
		string s;
		cin>>s;
		i = stoi( s );
		if(i%11==0){
			cout<<1;
		}
		else{
			cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
