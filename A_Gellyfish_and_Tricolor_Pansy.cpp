#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a >= b){
            if(c < b && d > c) cout<<"Flower\n";
            else cout<<"Gellyfish\n";
        } else {
            if(d > a || c < d) cout<<"Flower\n";
            else cout<<"Gellyfish\n";
        }
    }
    return 0;
}