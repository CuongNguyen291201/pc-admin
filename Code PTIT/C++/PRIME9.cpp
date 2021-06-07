#include<iostream>
using namespace std;

void phantich(int n) {
	int dem;
	for(int i=2; i<=n; i++) {
		dem=0;
		while(n%i==0) {
			dem++;
			n/=i;
		}
		if(dem) {
			cout<<i;
			if(dem>=1) {
				cout<<" "<<dem<<" ";
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		phantich(n);
		cout<<endl;
	}
}
