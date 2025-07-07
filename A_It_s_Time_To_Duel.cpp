#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        bool has_adjacent_zeros=false;
        int zero_count=0;
        for(int i=0;i<n;++i){
            cin>>a[i];
            if(a[i]==0){
                zero_count++;
            }
        }
        for(int i=0;i<n-1;++i){
            if(a[i]==0 && a[i+1]==0){
                has_adjacent_zeros=true;
                break;
            }
        }
        if(has_adjacent_zeros || (zero_count==0)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}