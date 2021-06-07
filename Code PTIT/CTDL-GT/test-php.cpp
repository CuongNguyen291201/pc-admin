#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n/3;i++){
			cout<<a[i]<<" "<<a[i+n/3]<<" "<<a[i+2*n/3]<<" ";
		}
	}
	return 0;
}
