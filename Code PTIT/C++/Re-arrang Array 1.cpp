#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <long long> a(n), b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=-1;
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==a[j]){
					b[i]=i;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
