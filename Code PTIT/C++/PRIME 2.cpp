#include<iostream>
#include<cmath>
using namespace std;

long long check(long long n){
	if(n<2) return 0;
	else {
		for(long long i=0;i<=sqrt(n);i++){
			if(n%i==0)
				return 0;
		}
		return 1;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(check(n)==1){
			cout<<n<<endl;
		}
		else{
			for(int i=2;i<=sqrt(n);i++){
				if(n%i==0){
					if(check(n/i)==1){
						cout<<n/i;
						break;
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
