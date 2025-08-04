// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(),(x).end()

void solve(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    int cnt0=0,cnt1=0;
    for(char c:s){
        if(c=='0')cnt0++;
        else cnt1++;
    }
    int maxPairs=n/2;
    if(k>maxPairs){
        cout<<"NO"<<nline;
        return;
    }
    int minChanges=n/2-abs(cnt0-cnt1)/2;
    if(k<minChanges){
        cout<<"NO"<<nline;
        return;
    }
    cout<<"YES"<<nline;
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