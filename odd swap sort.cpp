#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> odd,even;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			if(x%2==0) even.push_back(x);
			else odd.push_back(x);
		}
		vector<int> sortedodd = odd, sortedeven = even;
		sort(sortedodd.begin(),sortedodd.end());
		sort(sortedeven.begin(), sortedeven.end());
		bool value = true;
		
		for(int i=0;i<(int)odd.size();i++){
			if(sortedodd[i]!=odd[i]){
				value = false;
				break;
			}
		}
		for(int i=0;i<(int)even.size();i++){
			if(sortedeven[i]!=even[i]){
				value = false;
				break;
			}
		}
		cout<<(value ? "Yes\n" : "No\n");
	}
	return 0;
}
