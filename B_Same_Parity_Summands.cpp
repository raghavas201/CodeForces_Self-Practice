#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int r1=n-(k-1);
        if(r1>0&&r1%2==1){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++) cout<<1<<' ';
            cout<<r1<<'\n';
            continue;
        }
        int r2=n-2*(k-1);
        if(r2>0&&r2%2==0){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++) cout<<2<<' ';
            cout<<r2<<'\n';
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}
