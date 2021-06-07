#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--) {
		long long a, b;
		cin>>a; cin>>b;
		cout<< (a * b) / (std::__gcd(a, b)) << ' ' << std::__gcd(a, b);
		cout<<endl;
	}
}
