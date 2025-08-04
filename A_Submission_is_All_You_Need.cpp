// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve(){
    int sz;cin>>sz;
    vector<int>freq(51,0);
    int sum=0;
    for(int i=0;i<sz;++i){
        int x;cin>>x;
        freq[x]++;
        sum+=x;
    }
    vector<vector<int>>dp(52,vector<int>(sz+1,0));
    for(int i=50;i>=1;--i){
        for(int j=0;j<=sz;++j){
            if(j==0){
                dp[i][0]=dp[i+1][0];
            }else{
                dp[i][j]=dp[i][j-1];
                if(j<=freq[i]){
                    dp[i][j]=max(dp[i][j],j*(1-i)+dp[i+1][j]);
                }
            }
        }
    }
    int maxScore=0;
    for(int m=0;m<=freq[0];++m){
        int cur=sum;
        cur+=m;
        cur+=dp[1][m];
        maxScore=max(maxScore,cur);
    }
    cout<<maxScore<<nline;
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}