#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long i;
	cin>>i;
	while(i--) {
		long long n;
		cin>>n;
		long long temp = 1, i;
		for (i=1; i<=n; i++) {
			temp = (temp * i) / (std::__gcd(temp, i));
		}
		cout<<temp<<endl;
	}
}
