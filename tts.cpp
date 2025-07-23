#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate the minimum cost
int minCost(int a[], int b[], int N, int K)
{
    // Initialize map and vector
    map<int, int> m;
    vector<int> v;
 
    for (int i = 0; i < N; i++) {
        if (m[a[i]] == 0) {
            m[a[i]] = b[i];
        }
        else {
            if (m[a[i]] < b[i]) {
                v.push_back(m[a[i]]);
                m[a[i]] = b[i];
            }
            else {
                v.push_back(b[i]);
            }
        }
    }
    sort(v.begin(), v.end());
    int size = K - m.size();
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans += v[i];
    }
    return ans;
}
 
// Driver code
int main()
{
	int n;cin>>n;
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int N = sizeof(a) / sizeof(a[0]);
     
    cout << minCost(a, b, N, n-1);
    return 0;
}