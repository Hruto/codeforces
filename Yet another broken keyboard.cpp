#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,k;cin>>n>>k;
	string s; cin>>s;
	ll arr[n+1];
	// untuk mengecek dan mengubah huruf yang ada menjadi 1, dan huruf yang tidak ada menjadi 0
	bool check[26] = {0}; // nilai default yang diinginkan adalah 0, jadi hasil apapun kalau mau benar harus akhirnya adalah 0. Ini adalah check alphabet
	for(int i = 0;i<k;i++){
		char c; cin>>c;
		check[c - 'a'] = 1;
	}
	for(ll i = 0;i<n;i++){
		if(check[s[i] - 'a']){ //kalau sama dengan 0, nilai defaultnya
			arr[i] = 1;
		}else{
			arr[i] = 0;
		}
	}
	//transisi
	ll f[n+1];
	ll ans = 0;
	f[0] = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == 0){
			f[i+1] = 0;
		}else{
			f[i+1] = f[i] + 1;
		}
		ans += f[i+1];
	}
	cout<<ans<<endl;
}
