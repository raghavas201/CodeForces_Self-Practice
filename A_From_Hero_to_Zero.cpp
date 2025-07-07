#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,c=0;
		cin>>n>>k;
		while(n){
			if(n%k==0){
				n/=k;
				c++;
			}else{
				c+=n%k;
				n-=n%k;
			}
		}
		cout<<c<<"\n";
	}
}