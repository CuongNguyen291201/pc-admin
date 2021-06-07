#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, flag=0, max;
		cin>>n;
		vector<int> a(n+2);
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) flag=1;
			if(i==0) max=a[0];
			else {
				if(max<a[i]) max=a[i];
			}
		}
		if(flag==0) cout<<max<<endl;
		int sum=0,res=a[0];
		for(int i=0;i<n;i++){
			if(sum+a[i]<0){
				sum=0;
				continue;
			}
			sum+=a[i];
			if(res<sum) res=sum;
		}
		cout<<res<<endl;
	}	
	return 0;
}
