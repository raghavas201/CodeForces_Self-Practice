#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> operations;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    operations.clear();
    for(int i=0;i<n;++i){
        if(a[i]>b[i]){
            swap(a[i],b[i]);
            operations.push_back({3,i+1});
        }
    }
    bool changed=true;
    while(changed){
        changed=false;
        for(int i=0;i<n-1;++i){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                operations.push_back({1,i+1});
                changed=true;
            }
        }
        for(int i=0;i<n-1;++i){
            if(b[i]>b[i+1]){
                swap(b[i],b[i+1]);
                operations.push_back({2,i+1});
                changed=true;
            }
        }
        for(int i=0;i<n;++i){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
                operations.push_back({3,i+1});
                changed=true;
            }
        }
    }
    cout<<operations.size()<<'\n';
    for(auto&[op,idx]:operations)cout<<op<<" "<<idx<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}