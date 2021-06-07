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
		int dem=0;
		int check=1;
		for(int i=0;i<n;i++){
			if(a[i]==pos){
				dem++;
				check=-1;
			}
		}
		if(check==1){
			cout<<-1;
		}
		else{
			cout<<dem;
		}
		cout<<endl;
	}
	return 0;
}
