#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int ans=1e9;
	for(int i=1;i<n-1;i++){
		int mx=0;
		for(int j=1;j<n;j++){
			if(j==i)continue;
			int l=j-1==i?j-2:j-1;
			mx=max(mx,abs(a[j]-a[l]));
		}
		ans=min(ans,mx);
	}
	cout<<ans<<"\n";
}