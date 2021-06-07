#include<bits/stdc++.h>
using namespace std;

string a,b;
string sum() {
	while(a.size()<b.size()) a="0"+a;
	while(a.size()>b.size()) b="0"+b;
	
	int length = a.size();
	string res="";
	int total=0;
	for(int i=length-1;i>=0;i--){
		int number = int(a[i]-'0') + int(b[i]-'0') + total;
		res = char(number%10 + '0') + res;
		total = number/10;
	}
	if(total>0) return char(total+'0') + res;
	return res;
}

int main(){
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		if(a[i]=='6') a[i]='5';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='6') b[i]='5';
	}
	cout<<sum()<<" ";
	
	for(int i=0;i<a.size();i++){
		if(a[i]=='5') a[i]='6';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='5') b[i]='6';
	}
	cout<<sum()<<" ";
	
	return 0;
}



