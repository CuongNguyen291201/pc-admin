#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.size();
		int res = 0;
		stack<int> a;
		a.push(-1);
		for(int i=0;i<n;i++){
			if(s[i]=='('){
				a.push(i);
			} else {
				a.pop();
				if(a.size()>0){
					res = max(res, i-a.top());
				}
				if(a.size()==0) a.push(i);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
