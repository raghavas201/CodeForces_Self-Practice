// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve(){
	int n;cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];

	unordered_set<int>usedA,usedB;

	for(int i=0;i<n;i++){
		bool a_inA=usedA.count(a[i]);
		bool b_inB=usedB.count(b[i]);
		bool b_inA=usedA.count(b[i]);
		bool a_inB=usedB.count(a[i]);

		int keep_gain=(!a_inA)+(!b_inB);
		int swap_gain=(!b_inA)+(!a_inB);

		if(swap_gain>keep_gain){
			swap(a[i],b[i]);
			usedA.insert(a[i]);
			usedB.insert(b[i]);
		}else{
			usedA.insert(a[i]);
			usedB.insert(b[i]);
		}
	}

	cout<<(int)usedA.size()+(int)usedB.size()<<nline;
	for(auto x:a)cout<<x<<" ";cout<<nline;
	for(auto x:b)cout<<x<<" ";cout<<nline;
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