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
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		a.insert(a.end(), b.begin(), b.end());
		sort(a.begin(), a.end());
		for(int i=0;i<n+m;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
