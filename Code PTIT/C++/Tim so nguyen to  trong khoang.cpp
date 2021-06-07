#include<iostream>
using namespace std;

int main() {
	int a,b,i,j,flag;
	cin>>a>>b;
	if(a>b) {
		int temp = a;
		a = b;
		b = temp;
	}
	for(i=a; i<=b; i++) {
		flag=0;
		for(j=2; j<i/2; j++) {
			if(i%j==0) {
				flag=1;
				break;
			}
		} 
		if(flag==0) {
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
