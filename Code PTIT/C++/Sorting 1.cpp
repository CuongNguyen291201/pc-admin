#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		
		sort(a.begin(), a.end());
		
		for(int i=0;i<n/2;i++){
			cout<<a[n-i-1]<<" "<<a[i]<<" ";
		}
		if(n%2!=0) cout<<a[n/2];
		cout<<endl;
	}
	return 0;
}