#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int a,b,n;
		cin>>a>>b>>n;
		int r=n%3;
		if(r==0)cout<<a<<'\n';
		else if(r==1)cout<<b<<'\n';
		else cout<<(a^b)<<'\n';
	}
}