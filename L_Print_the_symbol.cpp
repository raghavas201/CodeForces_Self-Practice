// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(),(x).end()

int getSymbol(int n,int k){
    if(n==1)return 0;
    int mid=1LL<<(n-2);
    if(k<=mid)return getSymbol(n-1,k);
    return 1-getSymbol(n-1,k-mid);
}

void solve(){
    int n,k;
    cin>>n>>k;
    cout<<getSymbol(n,k)<<nline;
}

int32_t main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}