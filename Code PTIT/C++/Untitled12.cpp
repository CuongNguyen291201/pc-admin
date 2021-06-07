#include<iostream>
using namespace std;

int check(int n){
	if(n<2) return 0;
	for(int i=2;i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<check(n)<<endl;
	}
	return 0;
}
