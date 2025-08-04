// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(auto&x:a)cin>>x;

	vector<char>ans(n,'0');

	// Mark prefix mins
	int curr_min=a[0];
	ans[0]='1';
	for(int i=1;i<n;++i){
		if(a[i]<curr_min){
			curr_min=a[i];
			ans[i]='1';
		}
	}
	// Mark suffix maxs
	int curr_max=a[n-1];
	ans[n-1]='1';
	for(int i=n-2;i>=0;--i){
		if(a[i]>curr_max){
			curr_max=a[i];
			ans[i]='1';
		}
	}
	cout<<string(ans.begin(),ans.end())<<nline;
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