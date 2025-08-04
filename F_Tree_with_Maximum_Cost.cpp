// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(),(x).end()

const int N=2e5+5;
vector<int>g[N],a(N);
int subSum[N],curCost=0,maxCost=0;

void dfs1(int u,int p,int depth){
    curCost+=depth*a[u];
    subSum[u]=a[u];
    for(int v:g[u]){
        if(v==p)continue;
        dfs1(v,u,depth+1);
        subSum[u]+=subSum[v];
    }
}

void dfs2(int u,int p){
    for(int v:g[u]){
        if(v==p)continue;
        int prevCost=curCost;
        curCost=curCost-(subSum[v])+((subSum[1]-subSum[v]));
        maxCost=max(maxCost,curCost);
        dfs2(v,u);
        curCost=prevCost;
    }
}

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs1(1,0,0);
    maxCost=curCost;
    dfs2(1,0);
    cout<<maxCost<<nline;
}

int32_t main(){
    fastio();
    solve();
    return 0;
}