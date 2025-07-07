#include <bits/stdc++.h>
using namespace std;

int power2mod(int exp, int mod) {
    int res=1, base=2;
    while(exp>0) {
        if(exp&1) res=1LL*res*base%mod;
        base=1LL*base*base%mod;
        exp>>=1;
    }
    return res;
}

int main() {

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> p(n),q(n),pos_p(n),pos_q(n),pre_p(n),pre_q(n);

        for(int i=0;i<n;i++) {
            cin>>p[i];
            pos_p[p[i]]=i;
        }

        for(int i=0;i<n;i++) {
            cin>>q[i];
            pos_q[q[i]]=i;
        }

        pre_p[0]=p[0];
        pre_q[0]=q[0];

        for(int i=1;i<n;i++) {
            pre_p[i]=max(pre_p[i-1],p[i]);
            pre_q[i]=max(pre_q[i-1],q[i]);
        }

        const int MOD=998244353;
        for(int i=0;i<n;i++) {
            int A=pre_p[i],B=pre_q[i],primary,secondary;

            if(A>B) {
                primary=A;
                int j0=pos_p[A];
                secondary=q[i-j0];
            } else if(B>A) {
                primary=B;
                int k0=pos_q[B];
                secondary=p[i-k0];
            } else {
                primary=A;
                int j0=pos_p[primary],k0=pos_q[primary];
                int cand1=q[i-j0],cand2=p[i-k0];
                secondary=max(cand1,cand2);
            }

            int ans=(power2mod(primary,MOD)+power2mod(secondary,MOD))%MOD;
            cout<<ans<<" ";
        }
        cout<<"\n";
    }

    return 0;
}