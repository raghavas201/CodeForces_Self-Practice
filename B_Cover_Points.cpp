#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,m=0;
	cin>>n;
	while(n--){
		cin>>x>>y;
		m=max(m,x+y);
	}
	cout<<m<<"\n";
}