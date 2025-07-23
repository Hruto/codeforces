#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n;cin>>m>>n;
	int time[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)cin>>time[i][j];
	}
	vector<int>fi(m);
	for(int i=0;i<n;i++){
		int check=0;
		for(int j=0;j<m;j++){
			int start = max(check, fi[j]);
			fi[j]=start+time[j][i];
			check = fi[j];
		}
	}
	for(auto x : fi)cout<<x<<" ";
}