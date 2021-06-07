#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> a(n), b;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b.push_back(a[i]);
		sort(b.begin(), b.end());
		cout<<"Buoc "<<i<<": ";
		for(int j=0;j<b.size();j++){
			cout<<b[j]<<" ";
		}
		cout<<endl;
	}
}
