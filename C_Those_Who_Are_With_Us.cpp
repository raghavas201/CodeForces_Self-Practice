#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int>>a(n,vector<int>(m));
		vector<tuple<int,int,int>>cells;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				cells.push_back({a[i][j],i,j});
			}
		}

		sort(cells.rbegin(),cells.rend());
		int ans=1e9;
		for(int x=0;x<min(4,(int)cells.size());x++){
			for(int y=0;y<min(4,(int)cells.size());y++){
				int r=get<1>(cells[x]);
				int c=get<2>(cells[y]);
				int cur=0;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						int val=a[i][j];
						if(i==r || j==c)val--;
						cur=max(cur,val);
					}
				}
				ans=min(ans,cur);
			}
		}
		cout<<ans<<'\n';
	}
}