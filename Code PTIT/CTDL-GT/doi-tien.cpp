#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int m=10;
	while(t--){
		int n,dem=0;
		cin>>n;
		for(int i=m-1;i>=0;i--){
			dem += n/a[i];
			n%=a[i];
		}
		cout<<dem<<endl;
	}
	return 0;
}
