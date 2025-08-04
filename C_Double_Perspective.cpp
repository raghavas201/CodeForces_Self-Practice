// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>pairs(n);
    vector<int>coords;
    vector<vector<pair<int,int>>>adj;

    for(int i=0;i<n;++i){
        cin>>pairs[i].first>>pairs[i].second;
        coords.push_back(pairs[i].first);
        coords.push_back(pairs[i].second);
    }

    sort(coords.begin(),coords.end());
    coords.erase(unique(coords.begin(),coords.end()),coords.end());

    map<int,int>compress;
    for(int i=0;i<coords.size();++i)compress[coords[i]]=i;

    int m=coords.size();
    adj.resize(m);
    for(int i=0;i<n;++i){
        int u=compress[pairs[i].first],v=compress[pairs[i].second];
        adj[u].push_back({v,i+1});
    }

    vector<int>dp(m+1,0);
    vector<vector<int>>choice(m+1);

    for(int i=m-1;i>=0;--i){
        dp[i]=dp[i+1];
        choice[i]=choice[i+1];
        for(auto &[j,id]:adj[i]){
            int len=coords[j]-coords[i],score=len+dp[j+1];
            if(score>dp[i]){
                dp[i]=score;
                choice[i]={id};
                if(j+1<=m)choice[i].insert(choice[i].end(),choice[j+1].begin(),choice[j+1].end());
            }
        }
    }

    auto &res=choice[0];
    cout<<res.size()<<'\n';
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();++i){
        cout<<res[i]<<(i==res.size()-1?"":" ");
    }
    cout<<'\n';
}

int32_t main(){
    fastio();
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}