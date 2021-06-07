#include <iostream>
using namespace std;

unsigned long long int GCD(unsigned long long int a, unsigned long long int b) {
	if(b == 0) return a;
	return GCD(b, a % b);
}

unsigned long long int LCM(unsigned long long int a, unsigned long long int b) {
	return (a * b) / GCD(a, b);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int temp = 1;
		for(int i=1; i<=n; i++) {
			temp = LCM(temp, i);
		}
		cout<<temp<<endl;
	}
}
