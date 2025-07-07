#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;++i)cin>>a[i];
        for(int i=0;i<n;++i)cin>>b[i];
        long long x=-1;
        bool ok=1;
        for(int i=0;i<n;++i)
            if(b[i]!=-1){
                long long cur=a[i]+b[i];
                if(x==-1)x=cur;
                else if(x!=cur)ok=0;
            }
        if(!ok){
            cout<<0<<"\n";
            continue;
        }
        long long ans=1;
        if(x==-1){
            long long l=*max_element(a.begin(),a.end());
            long long r=*min_element(a.begin(),a.end())+k;
            ans=max(0LL,r-l+1);
        }else{
            for(int i=0;i<n;++i)
                if(b[i]==-1){
                    long long need=x-a[i];
                    if(need<0||need>k){
                        ans=0;
                        break;
                    }
                }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
