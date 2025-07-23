#include <bits/stdc++.h>
using namespace std;

vector<int>adj[200010];

int f[200010],cath[200010];

void dfs(int x){
	for(auto it:adj[x]){
		if(it!=f[x]){
			f[it]=x;
			cath[it]=cath[x]+1;
			dfs(it);
		}
	}
}
int ans=0;
void dfs2(int x){
	if(cath[x]>ans)ans=cath[x];
	for(auto it:adj[x]){
		if(it!=f[x]){
			dfs2(it);
		}
	}
}
int main(){
	int n,b;cin>>n>>b;
	for(int i=0;i<n-1;i++){
		int u,v;cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	f[1]=-1;cath[1]=0;
	dfs(1);
	int j=b;
	for(int i=0;i<(cath[b]-1)/2;i++)j=f[j];
	dfs2(j);
	cout<<ans*2<<endl;
	//cout<<dfs(1)*2<<endl;
}