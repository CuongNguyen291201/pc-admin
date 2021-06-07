#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int dem=0;
			for(int m=1;m<=n;m++){
				if(a[m]==1)
					dem++;
			}
			if(dem==k){
				for(int m=1;m<=n;m++){
					cout<<a[m];
				}
				cout<<endl;
			}
		}
		else Try(i+1);
		
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
	}
	return 0;
}
