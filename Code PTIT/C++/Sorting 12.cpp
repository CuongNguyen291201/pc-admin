#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector <long long> a(n), b(m);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		
		cout<<a[n-1]*b[0]<<endl;
	}
	return 0;
}
