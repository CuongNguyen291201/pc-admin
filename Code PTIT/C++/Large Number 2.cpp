#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		std::string s1, s2;
		cin>>s1>>s2;
		
		int a = stoi(s1);
		int b = stoi(s2);
		int c = a + b;
		cout<<to_string(c)<<endl;
	}
	return 0;
}
