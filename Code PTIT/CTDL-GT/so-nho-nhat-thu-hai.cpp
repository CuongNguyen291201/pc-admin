#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <long long> a(n);
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		if (a[0]==a[1]) cout<<-1;
		else cout<<a[0]<<" "<<a[1];
		cout<<endl;
	}
	return 0;
}
