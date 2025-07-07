#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int totaltime=(n*(n+1))/2+((n-1)*n)/2;
        cout<<totaltime<<endl;
    }
    return 0;
}
