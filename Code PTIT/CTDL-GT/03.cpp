#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int flag = i+1;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[flag]){
				flag=j;
			}
		}
		if(a[i]>a[flag]) swap(a[i], a[flag]);
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
