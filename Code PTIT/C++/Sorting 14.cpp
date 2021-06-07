#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		
//		int check=1;
//		for(int i=0;i<n-1;i++){
//			if(a[i+1]-a[i]==1){
//				check=-1;
//			}
//		}
//		if(check==-1){
//			cout<<0;
//		}
//		else{
//			cout<<1;
//		}
		cout<<endl;
	}
	return 0;
}
