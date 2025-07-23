#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100010];
map<int, pair<int,int> >deg;
map<int,int>cath;

void dfs(int x,int y){
	printf("%d ",cath[x]);
	for(auto it:adj[x]){
		if(it!=y)dfs(it,x);
	}
}
int main(){
	int n;cin>>n;
	int j=1;
	for(int i=1;i<=n;i++){
		int u,v;cin>>u>>v;
		if(!deg.count(u)){
			deg[u].first=1;
			deg[u].second=j;
			cath[j]=u;
			j++;
		}else{
			deg[u].first++;
		}if(!deg.count(v)){
			deg[v].first=1;
			deg[v].second=j;
			cath[j]=v;
			j++;
		}else{
			deg[v].first++;
		}
		adj[deg[u].second].push_back(deg[v].second);
		adj[deg[v].second].push_back(deg[u].second);
	}
	int x=0;
	for(auto it:deg){
		if(it.second.first==1){
			x=it.second.second;
			break;
		}
	}
	dfs(x,0);
	cout<<endl;
}