#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int max_f=0;
        for(int i=1;i<=n;i++)
            max_f+=abs((n+1-2*i));
        cout<<max_f/2+1<<'\n';
    }
}