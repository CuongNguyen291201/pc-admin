#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,pos;
		cin>>n>>pos;
		vector <int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		int temp;
		for(int i=0;i<n;i++){
			temp = a[pos-1];
		}
		cout<<temp;
		cout<<endl;
	}
	return 0;
}
