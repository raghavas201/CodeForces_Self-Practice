#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        long long sum=0,x;
        for(int i=0;i<n-1;++i){
            cin>>x;
            sum+=x;
        }
        cout<<-sum<<"\n";
    }
    return 0;
}
