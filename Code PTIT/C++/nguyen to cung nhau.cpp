#include<iostream>
#include<math.h>
using namespace std;

int check(int n){
	if(n<2){
		return 0;
	}
	else if(n==2){
		return 0;
	}
	else if(n>2){
		for(int i=3;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<check(n);
	}
	return 0;
}
