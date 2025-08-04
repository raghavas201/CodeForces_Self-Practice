#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"

bool is_safe(int element,const deque<int>&context){
    if(context.size()<4)return true;
    if(context[0]<context[1]&&context[1]<context[2]&&context[2]<context[3]&&context[3]<element)return false;
    if(context[0]>context[1]&&context[1]>context[2]&&context[2]>context[3]&&context[3]>element)return false;
    return true;
}

bool is_L_fatal(int l,int r,const vector<int>&p,const deque<int>&context){
    if(r-l+1<3)return false;
    deque<int>next_context=context;
    next_context.push_back(p[l]);
    if(next_context.size()>4)next_context.pop_front();
    int next_L_val=p[l+1];
    int next_R_val=p[r];
    if(!is_safe(next_L_val,next_context)&&!is_safe(next_R_val,next_context))return true;
    return false;
}

void solve(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int&i:p)cin>>i;
    int l=0,r=n-1;
    string result="";
    deque<int>context;
    while(l<=r){
        bool take_L;
        if(l==r){
            take_L=true;
        }else{
            bool safe_l=is_safe(p[l],context);
            bool safe_r=is_safe(p[r],context);
            if(safe_l&&safe_r){
                take_L=!is_L_fatal(l,r,p,context);
            }else{
                take_L=safe_l;
            }
        }
        int chosen_val;
        if(take_L){
            result+='L';
            chosen_val=p[l];
            l++;
        }else{
            result+='R';
            chosen_val=p[r];
            r--;
        }
        context.push_back(chosen_val);
        if(context.size()>4)context.pop_front();
    }
    cout<<result<<nline;
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