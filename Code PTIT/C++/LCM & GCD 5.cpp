#include<iostream>
using namespace std;

long long kt(int a, int b) {
	if(a==0 || b==0) return a+b;
	else if(a>=b) return kt(a%b, b);
	else return kt(a, b%a);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long a,x,y;
		cin>>a>>x>>y;
		long long ucln = kt(x,y);
		for(long long i=1; i<=ucln; i++) {
			cout<<a;
		}
		cout<<endl;
	}
	return 0;
}
