#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int length1,breadth1,length2,breadth2,length3,breadth3;
        cin>>length1>>breadth1>>length2>>breadth2>>length3>>breadth3;
        long long totalArea=1LL*length1*breadth1+1LL*length2*breadth2+1LL*length3*breadth3;
        int side=sqrt(totalArea);
        bool canForm=false;
        if(1LL*side*side==totalArea){
            if(length1==side&&length2==side&&length3==side&&breadth1+breadth2+breadth3==side) canForm=true;
            if(breadth1==side&&breadth2==side&&breadth3==side&&length1+length2+length3==side) canForm=true;
            if(length1==side){
                int rem=side-breadth1;
                if(rem>0&&breadth2==rem&&breadth3==rem&&length2+length3==side) canForm=true;
            }
            if(breadth1==side){
                int rem=side-length1;
                if(rem>0&&length2==rem&&length3==rem&&breadth2+breadth3==side) canForm=true;
            }
        }
        cout<<(canForm?"YES\n":"NO\n");
    }
    return 0;
}