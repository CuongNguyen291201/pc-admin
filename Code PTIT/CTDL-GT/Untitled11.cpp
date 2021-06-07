#include<bits/stdc++.h>
using namespace std;

int a[100],n,k;

void res(){
	for(int i=1;i<=k;i++)
		cout<<a[i];
	cout<<" ";
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+1;j++){
		a[i]=j;
		if(i==k) res();
		else Try(i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		cout<<endl;
	}
	return 0;
}
