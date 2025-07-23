#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n+2],b[n+2];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	int k=sizeof(a)/sizeof(a[0]);
	map<int,int>m;
	vector<int>v;
	for(int i=0;i<k;i++){
		if(m[a[i]]==0)m[a[i]]=b[i];
		else{
			if(m[a[i]]<b[i]){
				v.push_back(m[a[i]]);
				m[a[i]]=b[i];
			}else v.push_back(b[i]);
		}
	}
	sort(v.begin(),v.end());
	int size=n-m.size();
	int ans=0;
	for(int i=0;i<size;i++){
		ans+=v[i];
	}cout<<ans<<endl;
}