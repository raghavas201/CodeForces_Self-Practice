// CODEFORCES 
// ODD GRASSHOPPER
// RATED 900

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll x,n;
    cin>>x>>n;
    ll d;

    switch(n%4){
        case 0:
            d=0;
            break;
        case 1:
            d=-n;
            break;
        case 2:
            d=1;
            break;
        case 3:
            d=n+1;
            break;
    }

    if(x%2==0)cout<<x+d<<endl;
    else cout<<x-d<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
