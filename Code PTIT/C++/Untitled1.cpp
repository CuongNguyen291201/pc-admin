#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <long long> a(n), b(n/2);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int check=0, k=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					cout<<a[i];
					check=1;
					break;
					
				}
			}
		}
		if(check==0) cout<<"NO";
//		else cout<<b[0];
		cout<<endl;
	}
	return 0;
}
