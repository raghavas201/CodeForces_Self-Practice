#include <bits/stdc++.h>
using namespace std;
int t;
long long x;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>x;
        int k=0;
        while((1LL<<k)<x+1)k++;
        int ans=2*k+1;
        cout<<ans<<'\n';
    }
    return 0;
}