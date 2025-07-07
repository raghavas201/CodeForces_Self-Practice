#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,c,res=INT_MAX;
	cin>>a>>b>>c;
	for(int da=-1;da<=1;++da){
		for(int db=-1;db<=1;++db){
			for(int dc=-1;dc<=1;++dc){
				int x=a+da,y=b+db,z=c+dc;
				int d=abs(x-y)+abs(y-z)+abs(z-x);
				res=min(res,d);
			}
		}
	}
	cout<<res<<'\n';
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)solve();
}