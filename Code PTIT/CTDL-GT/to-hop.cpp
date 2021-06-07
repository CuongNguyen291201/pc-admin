#include<bits/stdc++.h>
const long long mod = 1e9+7;
using namespace std;

long long a[1000][1000];

int main(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(i==0||j==0) a[i][j]=1;
			else a[i][j] = a[i-1][j-1]+a[i-1][j];
			a[i][j]%=mod;
		}
	}
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<a[n][k]<<endl;
	}
	return 0;
}
