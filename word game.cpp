#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		set<string>v;
		int sum = 0;
		for(int i=0;i<n;i++){
			string j;cin>>j;
			v.insert(j);
			sum+=3;
		}
		//second child
		int sum2 = 0;
		set<string>v1;
		for(int i=0;i<n;i++){
			string s;cin>>s;
			v1.insert(s);
			if(v.count(s)){
				sum2+=1;
				sum-=2;
			}else sum2+=3;
		}
		//third child
		int sum3 = 0;
		for(int i=0;i<n;i++){
			string s;cin>>s;
			if(v.count(s)&&v1.count(s)){
				sum-=1;
				sum2-=1;
			}else{
				if(v.count(s)){
					sum3+=1;
					sum-=2;
				}else if(v1.count(s)){
					sum3+=1;
					sum2-=2;
				}else sum3+=3;
			}
		}
		cout<<sum<<" "<<sum2<<" "<<sum3<<endl;
	}
	return 0;
}
