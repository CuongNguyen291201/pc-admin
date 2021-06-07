#include<bits/stdc++.h>
using namespace std;

int th[100];
bool check;

//khoi tao
void getTh(int k){
	for(int i=1;i<=k;i++){
		th[i]=i;
	}
}

//in ket qua
void resTh(int k){
	for(int i=1;i<=k;i++){
		cout<<th[i];
	}
	cout<<" ";
}

//sinh hoan vi
void sinhTh(int k, int n){
	int i=k;
	while(i>0 && th[i] == n-k+1) i--;
	if(i<=0) check=true;
	else {
		th[i]+=1;
		for(int j=i+1;j<=k;j++){
			th[j]=th[j-1]+1;
		}
	}
}

//main
void tohop(int n, int k){
	getTh(k);
	while(!check){
		resTh(k);
		sinhTh(k, n);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		tohop(n, k);
	}
	return 0;
}
