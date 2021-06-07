#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> a(n), b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b.begin(), b.end());
	for(int i=0;i<n;i++){
		int check=0;
		for(int j=0;j<n;j++){
			if(a[j]!=b[j]){
				check=1;
				break;
			}
		}
		if(check!=1) break;
		
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]) swap(a[j], a[j+1]);
		}
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	
}
