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
    vector<int> a(n);
    for (int &x : a) cin >> x;

    unordered_map<int,int> freq;
    int maxFreq = 0;
    for (int x : a) {
        freq[x]++;
        maxFreq = max(maxFreq, freq[x]);
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