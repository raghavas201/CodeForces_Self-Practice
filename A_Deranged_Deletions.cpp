// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

void solve(){
	int n;cin>>n;
	vector<int>a(n);
	for(auto&x:a)cin>>x;

	if(n==1){
		cout<<"NO"<<nline;
		return;
	}

	vector<int>c=a;
	sort(all(c));

	vector<int>d(n);
	for(int i=0;i<n;i++)d[i]=c[(i+1)%n];

	bool derangement=true;
	for(int i=0;i<n;i++){
		if(d[i]==c[i]){
			derangement=false;
			break;
		}
	}
	if(!derangement){
		cout<<"NO"<<nline;
		return;
	}

	int idx=0;
	for(int i=0;i<n&&idx<n;i++){
		if(a[i]==d[idx])idx++;
	}
	if(idx<n){
		cout<<"NO"<<nline;
		return;
	}

	cout<<"YES"<<nline;
	cout<<n<<nline;
	for(int v:d)cout<<v<<" ";cout<<nline;
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