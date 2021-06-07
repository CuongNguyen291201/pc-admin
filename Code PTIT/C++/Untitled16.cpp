#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,total,a[1000000];
		cin>>n>>total;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++){
			if(a[i]==total){
				cout<<i+1;
			}
		}
		cout<<endl;
	}
	return 0;
}
