#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(),(x).end()

int n,m;
vector<string>grid;
vector<vector<bool>>vis;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

bool valid(int x,int y){
    return x>=0&&x<n&&y>=0&&y<m;
}

int dfs(int x,int y){
    if(!valid(x,y))return 0;
    if(vis[x][y])return 0;
    if(grid[x][y]=='*')return 0;
    vis[x][y]=true;
    int volume=1;
    for(int i=0;i<4;i++)volume+=dfs(x+dx[i],y+dy[i]);
    return volume;
}

void solve(){
    cin>>n>>m;
    grid.resize(n);
    vis.assign(n,vector<bool>(m,false));
    for(int i=0;i<n;i++)cin>>grid[i];
    int x,y;
    cin>>x>>y;
    x--,y--;
    cout<<dfs(x,y)<<nline;
}

int32_t main(){
    fastio();
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}
