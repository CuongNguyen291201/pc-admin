#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, total, result;
		cin>>n;
		total = n/100;
		result = n - total*100;
		if(result==86){
			cout<<1;
		}
		else{
			cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
