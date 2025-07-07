#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        if(k==0)cout<<string(n,'0')<<'\n';
        else if(k==n)cout<<string(n,'1')<<'\n';
        else if(k==1)cout<<'1'+string(n-1,'0')<<'\n';
        else{
            string s="1"+string(n-k-1,'0')+string(k-1,'1')+'0';
            cout<<s<<'\n';
        }
    }
    return 0;
}