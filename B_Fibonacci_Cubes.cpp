#include <bits/stdc++.h>
using namespace std;
int t,n,m;
int F[11];
struct S{int w,l,z;};
bool can(int W,int L,int H){
    if(W<F[n]||L<F[n]||H<F[n])return false;
    vector<S> v;
    v.reserve(32);
    v.push_back({W,L,0});
    for(int i=n;i>=1;i--){
        int bi=-1,bz=INT_MAX;
        for(int j=0;j<(int)v.size();j++){
            auto &s=v[j];
            if(s.w>=F[i]&&s.l>=F[i]&&s.z+F[i]<=H){
                if(s.z<bz){
                    bz=s.z; bi=j;
                }
            }
        }
        if(bi<0)return false;
        S cur=v[bi];
        v[bi]=v.back();
        v.pop_back();
        int w=cur.w, l=cur.l, z=cur.z;
        int fi=F[i];
        // right slice: (w-fi) x fi at z
        if(w-fi>0 && fi>0) v.push_back({w-fi,fi,z});
        // front slice: w x (l-fi) at z
        if(w>0 && l-fi>0) v.push_back({w,l-fi,z});
        // top slice: fi x fi at z+fi
        if(fi>0 && fi>0 && z+fi<=H) v.push_back({fi,fi,z+fi});
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    F[1]=1; F[2]=2;
    for(int i=3;i<=10;i++)F[i]=F[i-1]+F[i-2];
    cin>>t;
    while(t--){
        cin>>n>>m;
        while(m--){
            int w,l,h;
            cin>>w>>l>>h;
            cout<<(can(w,l,h)?'1':'0');
        }
        cout<<"\n";
    }
    return 0;
}