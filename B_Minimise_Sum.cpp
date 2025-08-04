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

	vector<int>pref_min(n),pref_min_sum(n);
	pref_min[0]=a[0];
	pref_min_sum[0]=a[0];
	for(int i=1;i<n;++i){
		pref_min[i]=min(pref_min[i-1],a[i]);
		pref_min_sum[i]=pref_min_sum[i-1]+pref_min[i];
	}

	int answer=pref_min_sum[n-1];

	for(int i=0;i<n-1;++i){
		int merged=a[i]+a[i+1];
		int sum=0;

		// Up to i-1
		if(i>0)
			sum+=pref_min_sum[i-1];

		// At i: min up to i-1 and merged
		int cur_min=(i>0)?min(pref_min[i-1],merged):merged;
		sum+=cur_min;

		// At i+1: min(cur_min,0)
		cur_min=min(cur_min,0LL);
		sum+=cur_min;

		// All rest: prefix-min stays zero
		sum+=0LL*(n-(i+2));

		answer=min(answer,sum);
	}

	cout<<answer<<nline;
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