#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>> q;
    set<int> visited;
    q.push({n,0});
    visited.insert(n);
    while(!q.empty()){
        int x=q.front().first;
        int d=q.front().second;
        q.pop();
        if(x==m){
            cout<<d<<'\n';
            return 0;
        }
        if(x*2<=2*m && !visited.count(x*2)){
            q.push({x*2,d+1});
            visited.insert(x*2);
        }
        if(x-1>0 && !visited.count(x-1)){
            q.push({x-1,d+1});
            visited.insert(x-1);
        }
    }
    return 0;
}
