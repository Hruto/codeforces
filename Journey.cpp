#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100010];

double dfs(int x=0,int y=-1){
	double sum=0;
	for(auto it:adj[x]){
		if(it!=y)sum+=dfs(it,x)+1;
	}return sum ? sum / (adj[x].size()-(y!=-1)):0;
}
signed main(){
	int n;cin>>n;
	for(int i=0;i<n-1;i++){
		int u,v;cin>>u>>v,u--,v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	printf("%.10lf\n",dfs());
}