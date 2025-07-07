#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string x,s;
        cin>>n>>m>>x>>s;
        int ans=-1;
        for(int i=0;i<=10;++i){
            if(x.find(s)!=-1){
                ans=i;
                break;
            }
            x+=x;
        }
        cout<<ans<<"\n";
    }
    return 0;
}