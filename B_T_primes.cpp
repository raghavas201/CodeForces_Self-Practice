#include<bits/stdc++.h>
using namespace std;

const int MAX=1e6+1;
bool isPrime[MAX];

int main(){
    for(int i=2;i<MAX;++i)isPrime[i]=1;
    for(int i=2;i*i<MAX;++i)
        if(isPrime[i])
            for(int j=i*i;j<MAX;j+=i)
                isPrime[j]=0;
    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        long long r=sqrt(x);
        cout<<((r*r==x&&isPrime[r])?"YES\n":"NO\n");
    }
    return 0;
}