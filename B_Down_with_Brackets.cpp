#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;cin>>s;
    int n=s.length();
    int balance=0;
    bool can_break=false;
    for(int i=0;i<n-1;i++){
        if(s[i]=='(')balance++;
        else balance--;
        if(balance==0){
            can_break=true;
            break;
        }
    }
    if(can_break)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
    return 0;
}