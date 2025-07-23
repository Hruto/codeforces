#include <bits/stdc++.h>
using namespace std;

string arr[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
void f(int n){
	int sum=0;
	while(sum<3){
		if(n>26){
			n-=26;sum++;
		}
		else{
			if(sum==0){
				cout<<arr[0]<<arr[0]<<arr[n-3]<<endl;
				return;
			}else if(sum==1){
				cout<<arr[0]<<arr[n-2]<<arr[25]<<endl;return;
			}else if(sum==2){
				cout<<arr[n-1]<<arr[25]<<arr[25]<<endl;
				return;
			}
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		f(n);
	}
}
