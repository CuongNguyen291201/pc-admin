#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		long a,b,result=1;
		long long c;
		cin>>a>>b>>c;
		for(int i=0;i<b;i++){
			result*=a;
		}
		cout<<result % c<<endl;
	}
	return 0;
}
