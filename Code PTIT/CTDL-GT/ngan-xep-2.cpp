#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	string s;
	int n;
	stack<int> a;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			cin>>n;
			a.push(n);
		}
		else if(s=="POP" && a.size()>0){
			a.pop();
		}
		else if(s=="PRINT"){
			if(a.size()==0) cout<<"NONE"<<endl;
			else cout<<a.top()<<endl;
		}
	}
	return 0;
}
