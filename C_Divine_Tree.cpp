#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int T;cin>>T;
    while(T--){
        ll n,m;cin>>n>>m;
        if(n==1){
            if(m==1) cout<<"1\n"; else cout<<"-1\n";
            continue;
        }
        ll two_n1=2*n+1;
        __int128 D=(__int128)two_n1*two_n1-(__int128)8*m;
        if(D<0){
            cout<<"-1\n"; continue;
        }
        ll sd=sqrt((long double)D);
        while((__int128)(sd+1)*(sd+1)<=D) sd++;
        while((__int128)sd*sd>D) sd--;
        ll lo=(two_n1-sd+1)/2, hi=(two_n1+sd)/2;
        ll r=max(max(1LL,m-(n-1)),lo);
        if(r>hi||r>n){
            cout<<"-1\n"; continue;
        }
        cout<<r<<"\n";
        ll extra=m-(r+(n-1));
        vector<ll> dv(n+1,1);
        vector<pair<ll,ll>> caps;
        for(ll v=1;v<=n;v++){
            if(v==r) continue;
            ll cap=v<r?v-1:r-1;
            caps.emplace_back(cap,v);
        }
        sort(caps.begin(),caps.end(),[](auto &A, auto &B){
            if(A.first!=B.first) return A.first>B.first;
            return A.second>B.second;
        });
        for(auto &p:caps){
            if(extra<=0) break;
            ll cap=p.first,v=p.second;
            ll inc=min(cap,extra);
            dv[v]+=inc; extra-=inc;
        }
        vector<ll> parent(n+1);
        ll last1=r;
        for(ll v=1;v<=n;v++){
            if(v==r) continue;
            if(dv[v]==1){
                parent[v]=last1;
                last1=v;
            } else parent[v]=dv[v];
        }
        for(ll v=1;v<=n;v++){
            if(v==r) continue;
            cout<<parent[v]<<" "<<v<<"\n";
        }
    }
    return 0;
}