#include<bits/stdc++.h>
using namespace std;

int a[100];
int flag=0;

void getTh(int k) {
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}

void resTh(int k) {
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<" ";
}

void sinhTh(int n, int k) {
	int i=k;
	while(i>0 && a[i] == n-k+i) i--;
	if(i<=0) flag=1;
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}

void tohop(int n, int k) {
	getTh(k);
	while(flag!=1){
		resTh(k);
		sinhTh(n, k);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		tohop(n, k);
		cout<<endl;
	}
	return 0;
}
