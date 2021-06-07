#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,pos;
		cin>>n>>pos;
		int a[10000000], j=1;
		for(int i=2;i<=n;i++){
			while(n%i==0){
				a[j]=i;
				j++;
				n/=i;
			}
		}
		if(pos>j) cout<<-1<<endl;
		else{
			cout<<a[pos]<<endl;
		}
	}
	return 0;
}
