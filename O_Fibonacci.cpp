// ॐ नमः शिवाय

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define all(x) (x).begin(), (x).end()

int fib(int n){
    if(n==1||n==2) return n-1;
    return fib(n-1)+fib(n-2);
}
void solve() {
    // Your code here
    int n;
    cin>>n;
    cout<<fib(n)<<nline;
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}