// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i=0; i<n; i++)
        cin >> b[i];
    int mx = 0;
    for(int i=0; i<n; i++) {
        if(b[i] < mx) { // cannot "go down" in the required value
            cout << "NO\n";
            return;
        }
        mx = max(mx, b[i]);
    }
    cout << "YES\n";
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