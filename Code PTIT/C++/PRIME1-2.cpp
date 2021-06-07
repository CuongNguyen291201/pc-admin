#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;

bool snt(long long n) {
	if(n<2) return false;
	else {
		for(long long i=2; i<=sqrt(n); i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n, temp = 1;
		cin>>n;
		for(long long i=1; i<=n;i++){
			if(n%i == 0 && snt(i))
			if(temp < i) temp = i;
		}
		cout<<temp<<" ";
		cout<<endl;
	}
}
