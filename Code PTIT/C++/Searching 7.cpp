#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,pos,a[100000];
		cin>>n>>pos;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0;i<pos;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
