#include <bits/stdc++.h>
using namespace std;

int cath[100010];

int find(int x){
	if(cath[x]==x)return x;
	cath[x]=find(cath[x]);
	return cath[x];
}

void join(int x, int y){
	int a = find(x);
	int b = find(y);
	cath[a]=b;
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cath[i]=i;
	}
	int ans=0;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		if(find(x)==find(y))ans++;
		else join(x,y);
	}
	cout<<ans<<endl;
}