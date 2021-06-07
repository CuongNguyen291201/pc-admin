#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,pos,a[10000];
		cin>>n>>pos;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int check=1;
		for(int i=0;i<n;i++){
			if(a[i]==pos){
				cout<<1;
				check=-1;
				break;
			}
		}
		if(check==1){
			cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}
