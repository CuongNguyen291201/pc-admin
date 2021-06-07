#include<iostream>
using namespace std;

int n;

void check(){
	int b=0;
	while(n>0){
		b+=n%10;
		n/=10;
	}
	n=b;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		while(n>9){
			check();
		}
		cout<<n<<endl;
	}
	return 0;
}
