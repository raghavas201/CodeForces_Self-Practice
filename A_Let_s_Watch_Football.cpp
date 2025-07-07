#include<iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long num=c*(a-b);
    long long t=(num + b - 1)/b;
    if(t<0) t=0;
    cout<<t<<"\n";
    return 0;
}