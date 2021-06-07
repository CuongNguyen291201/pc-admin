#include<bits/stdc++.h>
using namespace std;

vector<int> ke[100];
bool check[100];
int truoc[100];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	check[u]=true;
	while(q.size()>0){
		int top=q.front(); q.pop();
		for(int i=0;i<ke[top].size();i++){
			int v=ke[top][i];
			if(!check[v]){
				q.push(v);
				check[v]=true;
				truoc[v]=top;
			}
		}
	}
}

void trace(int u, int v){
	vector<int> res;
	while(u!=v){
		res.push_back(v);
		v=truoc[v];
	}
	res.push_back(u);
	for(int i=res.size()-1;i>=0;i--){
		cout<<res[i]<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int v,e,k;
		cin>>v>>e>>k;
		for(int i=0;i<e;i++){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}

		BFS(k);
		int m=1,n=6;
		trace(m,n);
	}
	return 0;
}
