// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;
    int up = n - k + 1;
    vector<int> res;
    // First, place 1 to up in order
    for (int i = 1; i <= up; ++i) res.push_back(i);
    // Then, place up+1 to n in reverse
    for (int i = n; i > up; --i) res.push_back(i);
    for (int x : res) cout << x << " ";
    cout << "\n";
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}