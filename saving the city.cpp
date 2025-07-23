#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a,b;scanf("%d%d",&a,&b);
		string s;cin>>s;
		int one = 0;
		vector<int>arr;
		for(int i=0;i<s.size();i++){
			if(s[i]=='1'){
				while(i<s.size()&&s[i]=='1')i++;
				one++;i--;
			}if(i>0&&s[i-1]=='1'&&s[i]=='0'){
				int count = 0;
				while(i<s.size()&&s[i]=='0'){
					count++;i++;
				}
				if(s[i]=='1')arr.push_back(count);
				i--;
			}
		}
		int ans = a*one;
		for(int i=0;i<arr.size();i++){
			if(arr[i]*b<a){
				ans = ans-a+arr[i]*b;
			}
		}
		printf("%d\n",ans);
	}
}
