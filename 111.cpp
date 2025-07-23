#include <bits/stdc++.h>
using namespace std;

int arr[26][26];
int check[26][26];
bool visited[26][26];
int t;
int n,k;
int last=-1;
int bns=0,ans=0;
void solve(int a, int b, int x){
	if(a>=0 && a<n && b>=0 && b<k){
		if(!visited[a][b]){
			if(arr[a][b]==x){
				t++;
				visited[a][b]=true;
				solve(a,b+1,x);
				solve(a,b-1,x);
				solve(a+1,b,x);
				solve(a-1,b,x);
			}
		}
	}
	
}
void ful(){
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			visited[i][j]=false;
		}
	}
}
void cek(){
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			check[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			if(visited[i][j])check[i][j]=1;
		}
	}
}

void runtuh(int last){
	for (int a = last - 1; a >= 0; a--) {
        for (int b = 0; b < k; b++) {
            if (arr[a][b]!=0) {
				int haha=arr[a][b];
                arr[a][b] = 0;
                int idx = a;
                while (idx < n && arr[idx][b] ==0)
                    idx++;
                arr[idx - 1][b] = haha;
            }
        }
    }
}

void place(){
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			if(check[i][j]==1){
				arr[i][j]=0;
				last=i;
			}
		}
	}
	runtuh(last);
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			if(arr[i][j]==0)continue;
			solve(i,j,arr[i][j]);
			bns= max(bns,t*(t-1));
			t=0;
		}
	}
	ful();
	cek();
}
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin>>arr[i][j];
			visited[i][j]=false;
		}
	}
	int temp=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			solve(i,j,arr[i][j]);ans=t*(t-1);cek();
			t=0;
			place();
			temp=max(temp,(ans+bns));
			cout<<ans<<" "<<bns<<endl;
			ans=0;bns=0;
		}
	}
	cout<<temp<<endl;
}