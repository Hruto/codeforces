#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int i = 0;i<n;i++) {
        int e;cin>>e;
        v.push_back(e);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
        ans -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();
        if (l <= 2 * v[i] && 2 * v[i] <= r) {
            ans--;
        }
    }
    cout << ans / 2 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
