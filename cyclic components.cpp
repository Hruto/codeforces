#include <bits/stdc++.h>
using namespace std;

vector<int>adj[200010];
bool visited[200010];
vector<int>graph;

void dfs(int x){
	graph.push_back(x);
	for(auto it:adj[x]){
		if(!visited[it]){
			visited[it]=true;
			dfs(it);
		}
	}
}

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			graph.clear();
			dfs(i);
			bool ch = true;
			for(auto x:graph){
				if(adj[x].size()==2)continue;
				else{
					ch = false;
					break;
				}
			}
			if(ch)sum++;
		}
	}
	cout<<sum<<endl;
}