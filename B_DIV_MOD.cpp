#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r,a;
		cin>>l>>r>>a;
		int x=r/a*a-1;
		if(x<l)x=r;
		cout<<max(r/a+r%a,x/a+x%a)<<"\n";
	}
}