#include <bits/stdc++.h>
using namespace std;
int main() {
    long long k,l,cnt=0;
    cin>>k>>l;
    while(l%k==0){
        l/=k;
        cnt++;
    }
    if(l==1&&cnt>0)cout<<"YES\n"<<cnt-1<<"\n";
    else cout<<"NO\n";
    return 0;
}
