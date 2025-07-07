#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>d(n);
    for(int i=0;i<n;i++)cin>>d[i];
    vector<pair<int,int>>p(n);
    for(int i=0;i<n;i++)cin>>p[i].first>>p[i].second;
    vector<pair<int,int>>h(n+1);
    h[0]={0,0};
    for(int i=0;i<n;i++){
        int mn=h[i].first,mx=h[i].second;
        int cmin,cmax;
        if(d[i]==0){cmin=mn;cmax=mx;}
        else if(d[i]==1){cmin=mn+1;cmax=mx+1;}
        else{cmin=mn;cmax=mx+1;}
        int l=p[i].first,r=p[i].second;
        h[i+1].first=max(l,cmin);
        h[i+1].second=min(r,cmax);
        if(h[i+1].first>h[i+1].second){
            cout<<"-1\n";
            return;
        }
    }
    vector<int>res(n);
    int cur=h[n].first;
    for(int i=n-1;i>=0;i--){
        if(d[i]!=-1){
            res[i]=d[i];
            cur-=d[i];
        }else{
            if(cur-1>=h[i].first){res[i]=1;cur--;}
            else res[i]=0;
        }
    }
    for(int i=0;i<n;i++)cout<<res[i]<<(i==n-1?"\n":" ");
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
    return 0;
}