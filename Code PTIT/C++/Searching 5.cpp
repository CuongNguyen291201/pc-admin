#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		int check=1;
		for(int i=0;i<n;i++){
			if(a[0]!=a[1]){
				check=1;
			}
			else {
				check=-1;
			}
		}
		if(check!=1){
			cout<<-1;
		}
		if(check==1) {
			for(int i=0;i<n;i++){
				cout<<a[0]<<" "<<a[1];
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
