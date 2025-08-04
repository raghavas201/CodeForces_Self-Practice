// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,c;
    cin>>n>>c;
    multiset<int>s;
    for(int i=0;i<n;++i){
        int weight;
        cin>>weight;
        s.insert(weight);
    }
    int cost=0,time=0;
    while(!s.empty()){
        int64_t multiplier=1LL<<time;
        int threshold=c/multiplier;
        auto it=s.upper_bound(threshold);
        if(it==s.begin()){
            cost+=s.size();
            break;
        }
        it--;
        s.erase(it);
        time++;
    }
    cout<<cost<<nline;
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