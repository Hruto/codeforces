#include <bits/stdc++.h>
using namespace std;

vector<int>adj[200010];
int check[200010];
bool visited[200010];
vector<int>ans;

void dfs(int x){
	for(auto it : adj[x]){
		if(!visited[it]){
			visited[it]=true;
			if(check[it]==1)check[it]=0;
			else if(check[it]==0){
				check[it]=1;
				ans.push_back(it);
			}
			dfs(it);
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		for(int i=1;i<=n;i++)check[i] = 1;
		for(int i=0;i<m;i++){
			int u,v;cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		dfs(1);
		for(auto x:check)cout<<x<<" ";
		//cout<<ans.size()<<endl;
		//for(auto x:ans)cout<<x<<" ";
		cout<<endl;
	}
}