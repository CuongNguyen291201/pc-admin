#include<bits/stdc++.h>
using namespace std;

int a[100], n=5, k=3;

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+1;j++){
		a[i]=j;
		if(i==k){
			for(int m=1;m<=k;m++){
				cout<<a[m];
			}
			cout<<" ";
		}
		else Try(i+1);
	}
}

int main(){
//	cin>>k>>n;
	Try(1);
	return 0;
}
