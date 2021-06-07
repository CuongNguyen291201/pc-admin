#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a[10000];
		int i,n,p,j=1;
		cin>>t;
		cin>>n;
		cin>>p;
		for(int i=2; i<=n; i++) {
			while(n%i==0) {
				a[j] = i;
				n/=i;
				j++;
			}
		}
		if(p>j) cout<<-1<<endl;
		else cout<<i<<endl;
	}
}
