#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
string s;
vector <string> res;

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n-k){
			for(int l=1;l<=n-k;l++){
				if(l==1 && a[l]==1){
					string t = "";
					t+=s;
					for(int m=1;m<=n-k;m++){
						if(a[m]==0) t += "A";
						else t += "B";
					}
					res.push_back(t);
				}
				if(l==n-k&&a[l]==1){
					string t = "";
					for(int m=1;m<=n-k;m++){
						if(a[m]==0) t += "A";
						else t += "B";
					}
					t += s;
					res.push_back(t);
				}
				if(a[l]&&a[l-1]&&l>1){
					string t = "";
					for(int m=1;m<=n-k;m++){
						if(m==1) t += s;
						if(a[m]==0) t += "A";
						else t += "B";
					}
					res.push_back(t);
				}
			}
		}
		else Try(i+1);
	}
}

int main(){
	cin>>n>>k; 
	for(int i=0;i<k;i++){
		s+="A";
	}
	Try(1);
	
	sort(res.begin(), res.end());
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}
	
	
	return 0;
}
