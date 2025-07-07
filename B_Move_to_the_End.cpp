#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<long long> suffix_sum(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) suffix_sum[i] = a[i] + suffix_sum[i + 1];

    vector<long long> prefix_max(n);
    prefix_max[0] = a[0];
    for (int i = 1; i < n; ++i) prefix_max[i] = max(a[i], prefix_max[i - 1]);

    vector<long long> ans(n);
    for (int k = 1; k <= n; ++k) {
        long long cur = suffix_sum[n - k];
        if (k == n) ans[k - 1] = cur;
        else ans[k - 1] = max(cur, suffix_sum[n - k + 1] + prefix_max[n - k - 1]);
    }

    for (int i = 0; i < n; ++i) cout << ans[i] << " \n"[i == n - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}