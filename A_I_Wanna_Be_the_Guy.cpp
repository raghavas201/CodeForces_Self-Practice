#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int x,y;cin>>x;
    set<int> levels;
    for(int i=0;i<x;i++){
        int level;
        cin>>level;
        levels.insert(level);
    }

    cin>>y;
    for(int i=0;i<y;i++){
        int level;
        cin>>level;
        levels.insert(level);
    }

    if(levels.size()==n){cout<<"I become the guy."<<endl;
    }
    else {cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}