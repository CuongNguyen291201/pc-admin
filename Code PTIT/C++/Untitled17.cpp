#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,pos,a[100000];
		cin>>n>>pos;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){
			if(a[i]==pos){
				cout<<i+1;
				break;
			}
		}

		cout<<endl;
	}
	return 0;
}
