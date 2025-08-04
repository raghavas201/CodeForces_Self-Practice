// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve() {
    // Your code here
    int n,r;
    cin>>n>>r;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)cin>>v[i].second;
    for(int i=0;i<n;i++)cin>>v[i].first;

    sort(all(v));
    int rem=n-1;
    int total=r;
    for(int i=0;i<n;i++){
        if(v[i].first>=r) break;
        int cnt=min(rem,v[i].second);
        total+=cnt*v[i].first;
        rem-=cnt;
    }
    total+=r*rem;
    cout<<total<<nline;
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