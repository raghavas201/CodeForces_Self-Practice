#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>freq;
        for(int i=0,x;i<n;++i){
            cin>>x;
            freq[x]++;
        }
        if(freq.size()>2)cout<<"No\n";
        else if(freq.size()==1)cout<<"Yes\n";
        else{
            vector<int>counts;
            for(pair<int,int>p:freq)counts.push_back(p.second);
            cout<<(abs(counts[0]-counts[1])<=1?"Yes\n":"No\n");
        }
    }
    return 0;
}