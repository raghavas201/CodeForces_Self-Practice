#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;
        vector<string> grid(2);
        for(auto &it:grid)cin>>it;
        int ans = 0;
        for(int i = 1; i < n-1;i++){
            bool flag = true;
            flag &= (grid[0][i]=='.'&&grid[1][i]=='.');
            flag &=(grid[0][i-1] != grid[1][i-1]);
            flag &=(grid[0][i+1] != grid[1][i+1]);
            flag &=(grid[0][i-1] == grid[0][i+1]);
            ans+= flag;
        }
        cout << ans << endl;
    }
}