#include<bits/stdc++.h>
using namespace std;

int n,k,a[20][20],x[100],res;
bool check[100];
vector <int> A;

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!check[j]){
			x[i]=j;
			check[j]=true;
			if(i==n){
				res=0;
				for(int l=1;l<=n;l++){
					res+=a[l][x[l]];
				}
				if(res==k){
					for(int l=1;l<=n;l++){
						A.push_back(x[l]);
					}
				}
			}
			else Try(i+1);
			check[j]=false;
		}
	}
}

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	Try(1);
	
	cout<<A.size()/n;
	for(int i=0;i<A.size();i++){
		if(i%n==0) cout<<endl;
		cout<<A[i]<<" ";
	}
	return 0;
}
