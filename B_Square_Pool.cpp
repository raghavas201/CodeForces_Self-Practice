#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; long long s;cin>>n>>s;
        long long M=2*s;
        int cnt=0;
        while(n--){
            int dx,dy,x,y;cin>>dx>>dy>>x>>y;
            bool pot=false;
            for(long long rx: {0LL,s}){
                for(long long ry: {0LL,s}){
                    long long tx = (dx*(rx - x) % M + M) % M;
                    long long ty = (dy*(ry - y) % M + M) % M;
                    if(tx==ty){ pot=true; break; }
                }
                if(pot) break;
            }
            if(pot) cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
