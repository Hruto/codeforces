#include <bits/stdc++.h>
#define INF 1000000009
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;scanf("%d",&n);
	int arr[n+1],pos[n+1],neg[n+1];
 
	for(int i=1;i<=n;i++)scanf("%d",&arr[i]);
	pos[0]=0;
	neg[0]=0;
 
	for(int i=1;i<=n;i++){
		if(arr[i]<0){
			neg[i]=neg[i-1]+1;
			pos[i]=pos[i-1];
		}
		else if(arr[i]>0){
			pos[i]=pos[i-1]+1;
			neg[i]=neg[i-1];
		}
		else{
		neg[i]=neg[i-1];
		pos[i]=pos[i-1];
		}
	}
	int ans = INF;
	for(int i=1;i<n;i++){
		ans = min(ans, n-neg[i]-pos[n]+pos[i]);
	}
	printf("%d\n", ans);
}
