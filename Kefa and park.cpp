#include <bits/stdc++.h>
using namespace std;

int cat[100069];
int n,m,sum=0;
vector<int>adj[100069];
bool visited[100069];
void dfs(int x,int c){
	if(adj[x].size()==1&&x!=1){
		sum++;
	}
	for(auto it:adj[x]){
		if(!visited[it]){
			if(cat[it-1]==1&&c+1<=m){
				visited[x]=true;
				dfs(it,c+1);
			}else if(cat[it-1]==0){
				visited[x]=true;
				dfs(it,0);
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>cat[i];
	}
	for(int i=0;i<n-1;i++){
		int u,v;cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	if(cat[0]==1)dfs(1,1);
	else dfs(1,0);
	cout<<sum<<endl;
}