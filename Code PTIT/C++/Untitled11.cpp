#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<2){
			cout<<0;
		}
		int count=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				count++;
			}
		}
		if(count==0){
			cout<<1;
		}
		else{
			cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
