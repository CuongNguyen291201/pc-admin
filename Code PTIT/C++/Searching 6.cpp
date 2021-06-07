#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, temp;
		cin>>n;
		vector <int> a(n), b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int k=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				b[k]=a[i]+a[j];
				k++;	
			}
		}
		sort(b.begin(), b.end());
		for(int i=0;i<k;i++){
			cout<<b[k];
		}
//		cout<<temp;
		cout<<endl;
	}
	return 0;
}
