// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]==0)c0++;
        else if(a[i]==1)c1++;
        else c2++;
    }
    int mn=c1+2*c2;
    if(s<mn||s==mn+1){
        if(s<mn){
            for(int i=0;i<n;++i)cout<<a[i]<<" ";
        }else{
            vector<int>res;
            res.insert(res.end(),c0,0);
            res.insert(res.end(),c2,2);
            res.insert(res.end(),c1,1);
            for(int i=0;i<n;++i)cout<<res[i]<<" ";
        }
        cout<<nline;
    }else{
        cout<<-1<<nline;
    }
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