#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool ok=0;
        for(int i=0,x;i<n;++i){
            cin>>x;
            if(x==k)ok=1;
        }
        cout<<(ok?"YES\n":"NO\n");
    }
    return 0;
}