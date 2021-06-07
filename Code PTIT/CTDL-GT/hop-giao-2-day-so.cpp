#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector <int> a(n);
		vector <int> b(m);
		vector <int> c(n+m);
		vector <int> d(n+m);
		vector <int>::iterator it;
		vector <int>::iterator it2;
		
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		
		it = set_union(a.begin(), a.end(), b.begin(), b.end(), c.begin());
		c.resize(it - c.begin());
		
		for(int i=0;i<c.size();i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
		
		it2 = set_intersection(a.begin(), a.end(), b.begin(), b.end(), d.begin());
		d.resize(it2 - d.begin());
		for(int i=0;i<d.size();i++){
			cout<<d[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
