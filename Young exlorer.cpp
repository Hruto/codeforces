#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		int ans = 0, cur = 0;
		for(int i=0;i<n;i++){
			if(++cur == arr[i]){
				ans++; cur=0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
