#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int &x:a)cin>>x;
        int ans=n-1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int mn=min(a[i],a[j]),mx=max(a[i],a[j]);
                if((mn+mx)%2==0){
                    int cnt=0;
                    for(int k=0;k<n;k++){
                        if(a[k]<mn||a[k]>mx)cnt++;
                    }
                    ans=min(ans,cnt);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}