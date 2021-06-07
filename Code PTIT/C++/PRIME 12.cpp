#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a[1000];
		int n, p;
		cin>>n;
		cin>>p;
		int j=1;
		for(int i=2; i<=n; i++){
			while(n%i==0) {
				a[j] = i;
				n/=i;
				j++;
			}
		}
		if(p>=j) cout<<-1<<endl;
		else cout<<a[p]<<endl;
	}
}
