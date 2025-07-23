#include <bits/stdc++.h>
#define blank ' '
#define len(x) x.size()
using namespace std;

int main(){
	int n,m,x;
    cin>>n>>m>>x;
    int size = max(n,m);
    vector<vector<int>> arr(size, vector<int> (size,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<x;i++){
    	vector<vector<int>> temp(size, vector<int> (size,0));
    	string c;cin>>c;
    	if(c=="90" || c=="270")swap(n,m);
    	for(int row=0;row<n;row++){
    		for(int col=0;col<m;col++){
    			if(c=="_")temp[row][col]=arr[n-row-1][col];
		    	else if(c=="|")temp[row][col]=arr[row][m-col-1];
		    	else if(c=="180")temp[row][col]=arr[n-row-1][m-col-1];
		    	else if(c=="90")temp[row][col]=arr[m-col-1][row];
		    	else if(c=="270")temp[row][col]=arr[col][n-row-1];
			}
		}
		arr=temp;
    	
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i][j]==0)continue;
			cout<<arr[i][j]<< ' ';
		}cout<<'\n';
	}
	return 0;
}