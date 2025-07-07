#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        bool flag = true;
        for(long long i = 0; i < n-1; i++){
            if(a[i] != a[i+1]) flag = false;
        }
        if(flag){
            cout << 0 << endl;
        }
        else{
            long long ans = 0;
            long long maxi = LLONG_MAX;
            for(long long i = 0; i < n; i++){
                long long curr = a[i];
                long long j = i;
                while(j < n && a[j] == curr){
                    j++;
                }
                ans = (curr * (i-1)) + ((n-j+1) * curr);
                maxi = min(maxi, ans);
            }
            cout << maxi << endl;
        }
    }
}