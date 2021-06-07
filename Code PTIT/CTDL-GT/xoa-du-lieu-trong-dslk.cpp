#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,a[100],b[100],m=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if (a[i]!=1) b[m]=a[i]; m++;
		}
		for(int i=0;i<m;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
