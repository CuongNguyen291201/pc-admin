#include<iostream>
#include<fstream>
using namespace std;

long long t;
long long kt(int a, int n, int c) {
	if(n==1) t=a;
	else {
		t=kt(a,n/2,c);
		t= t*t % c;
		if(n%2==1) t = (t*a)%c;
	}
	return t;
}

int main() {
	int test;
	cin>>test;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		kt(a%c,b,c);
		cout<<t<<endl;
	}
}
