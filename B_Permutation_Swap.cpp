// ॐ नमः शिवाय

#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <random>
using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#ifdef raghavasrivastava201
#define debug(x) cerr << #x << " = "; _print(x); cerr << nline;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(map<T, V> v);

template <class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map<T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll expo(ll a, ll b, ll mod) { ll res = 1; while (b) { if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1; } return res; }
void extendgcd(ll a, ll b, ll* v) { if (!b) { v[0] = 1, v[1] = 0, v[2] = a; return; } extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; }
ll mminv(ll a, ll b) { ll v[3]; extendgcd(a, b, v); return (v[0] + b) % b; }
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
ll mod_add(ll a, ll b, ll m) { return ((a % m + b % m) + m) % m; }
ll mod_sub(ll a, ll b, ll m) { return ((a % m - b % m) + m) % m; }
ll mod_mul(ll a, ll b, ll m) { return ((a % m * b % m) + m) % m; }
ll mod_div(ll a, ll b, ll m) { return mod_mul(a, mminvprime(b, m), m); }
ll phin(ll n) { ll res = n; if (n % 2 == 0) { res /= 2; while (n % 2 == 0) n /= 2; } for (ll i = 3; i <= sqrt(n); i += 2) { if (n % i == 0) { while (n % i == 0) n /= i; res = res / i * (i - 1); } } if (n > 1) res = res / n * (n - 1); return res; }
vector<ll> sieve(int n) { vector<ll> primes; vector<bool> isPrime(n+1, true); for (int i = 2; i <= n; i++) { if (isPrime[i]) { primes.pb(i); for (int j = i*i; j <= n; j += i) isPrime[j] = false; } } return primes; }
ll getRandomNumber(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
void inc(vector<ll>& a) { sort(all(a)); }

void solve(){
    int n;cin>>n;
    ll g = 0;
    for(int i = 1; i <= n; i++){
        int x; cin>>x;
        g = gcd(g, (ll)abs(x - i));
    }
    cout<<g<<nline;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}