#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool check[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	while(q.size()>0){
		int top=q.front(); q.pop();
		cout<<top<<" ";
		check[top]=true;
		for(int i=0;i<ke[top].size();i++){
			if(!check[ke[top][i]]){
				check[ke[top][i]]=true;
				q.push(ke[top][i]);
			}
		}
	}	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,k;
		cin>>a>>b>>k;
		for(int i=0;i<b;i++){
			int u,v;
			cin>>u>>v;
			ke[u].push_back(v);
		}
		BFS(k);
		cout<<endl;
	}
	return 0;
}
