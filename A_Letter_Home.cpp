#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,s;cin>>n>>s;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int a=*min_element(v.begin(),v.end());
        int b=*max_element(v.begin(),v.end());
        cout<<b-a+min(abs(s-a),abs(s-b))<<'\n';
    }
    return 0;
}