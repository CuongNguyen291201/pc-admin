#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,i,result;
		long long b;
		cin>>a>>b;
		result=0;
		for(i=1;i<=a;i++) {
			result+=(i%b);
		}
		cout<<result<<endl;
	}
	return 0;
}
