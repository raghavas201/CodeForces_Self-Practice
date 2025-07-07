#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int rows,cols;
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            cin>>x;
            if(x==1){
                rows=i;
                cols=j;
            }
        }
    }

    int moves=abs(rows-2)+abs(cols-2);
    cout<<moves<<endl;
    return 0;
}