#include<iostream>
using namespace std;

int main(){
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        int d=1;
        for(int i=2;i*i<=x;++i)
            if(x%i==0)
                d=max(d,max(i,x/i));
        cout<<d<<" "<<x-d<<"\n";
    }
    return 0;
}