#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)cin >> a[i];
        vector<int> d(m);
        for (int i = 0; i < m; i++)cin >> d[i];
        vector<int> f(k);
        for (int i = 0; i < k; i++)cin >> f[i];
        sort(d.begin(), d.end());
        sort(f.begin(), f.end());
        int m1 = 0, m2 = 0;
        int ind = -1;
        for (int i = 1; i < n; i++) {
            int e = a[i] - a[i - 1];
            m2 = max(m2, e);
            if (m2 > m1) {
                swap(m1, m2);
                ind = i - 1;
            }
        }
        int ans = m1;
        int target = (a[ind] + a[ind + 1]) / 2;
        for (int model : d) {
            int l = 0, r = k - 1;
            while (r - l > 1) {
                int mid = (r + l) / 2;
                if (model + f[mid] <= target) {
                    l = mid;
                } else {
                    r = mid;
                }
            }
            ans = min(ans, max(m2, max(abs(model + f[l] - a[ind]), abs(model + f[l] - a[ind + 1]))));
            ans = min(ans, max(m2, max(abs(model + f[r] - a[ind]), abs(model + f[r] - a[ind + 1]))));
        }
        cout<<ans<<endl;
    }
    return 0;
}

