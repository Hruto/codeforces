#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll b,k;cin>>b>>k;
	ll selisih = k-b;
	ll arr[70];
	ll note=0;
	for(int i=0;i<=61;i++){
		arr[i]=pow(2,i);
		if(arr[i]>selisih){
			note=i-1;break;
		}
	}
	int i=note;
	while(i>=0&&selisih>0){
		if(selisih-arr[i]>=0){
			selisih-=arr[i];
			cout<<arr[i]<<endl;
		}else i--;
	}
}