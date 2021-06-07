#include<bits/stdc++.h>
using namespace std;

int hv[100];
bool check;

// khoi tao cau hinh dau tien 1->n
void getHv(int n){
	for(int i=1;i<=n;i++){
		hv[i]=i;
	}
}

// in ket qua
void resHv(int n){
	for(int i=1;i<=n;i++){
		cout<<hv[i];
	}
	cout<<" ";
}

// sinh hoan vi
void sinhHv(int n){
	int i=n-1;
	while(i>0 && hv[i]>hv[i+1]) i--;
	if(i<=0) check=true;
	else{
		int k=n;
		while(hv[k]<hv[i]) k--;
		swap(hv[k], hv[i]);
		int l=i+1, r=n;
		while(l<r){
			swap(hv[l], hv[r]);
			l++;r--;
		}
	}
}

// main
void hoanvi(int n){
	getHv(n);
	resHv(n);
	while(!check){
		sinhHv(n);
		resHv(n);
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
//		int n;
//		cin>>n;
		hoanvi(2);
	}
	return 0;
}
