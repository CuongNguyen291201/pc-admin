#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, check=1;
		cin>>n;
		vector <int> a(n), b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b.begin(), b.end());
		for(int i=0;i<n;i++){
			if(a[i]!=b[i] && a[i]!=b[n-i-1]){
				check=0;
				break;
			}
		}
		if(check==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
