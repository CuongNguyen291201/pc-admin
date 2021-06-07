#include<iostream>
using namespace std;

int main() {
	int a,b,i,j;
	cin>>a;
	cin>>b;
	for(i=a+1; i<b; i++) {
		int dem = 0;
		for(j=2; j<i/2; i++) {
			if(i%j==0) {
				dem++;
			}
		}
		if(dem==2) cout<<i<<" "<<endl;
	}
}
