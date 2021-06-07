#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <long long> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		} 
		int flag=-1, res;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					flag=1;
					cout<<a[i];
					break;
				}
			}
		}
		if(flag==-1) cout<<"NO";
		cout<<endl;
	}
	return 0;
}
