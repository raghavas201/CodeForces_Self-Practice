#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,m,x,c=0;
	cin>>x>>h>>m;
	while(1){
		if(h%10==7||h/10==7||m%10==7||m/10==7)break;
		m-=x;
		if(m<0){
			m+=60;
			h=(h+23)%24;
		}
		c++;
	}
	cout<<c<<"\n";
}