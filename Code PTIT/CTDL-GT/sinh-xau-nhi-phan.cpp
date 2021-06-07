#include<bits/stdc++.h>
using namespace std;

void check(){
	string s;
	cin>>s;
	int i=s.size()-1;
	while(s[i] == '1' && i>=0){
		i--;
	}
	if(i<0){
		for(int i=0;i<s.size();i++){
			cout<<0;
		}
		cout<<endl;
	}
	else{
		s[i]='1';
		for(int j=i+1;j<s.size();j++){
			s[j]='0';
		}
		cout<<s<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		check();
	}
	return 0;
}

//xet tu cuoi day, gap so 0 dau tien thì thay = 1 va cho tat ca so phia sau = 0
