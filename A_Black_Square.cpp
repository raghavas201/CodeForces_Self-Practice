#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    for (int i=1;i<=4;i++){
        cin>>a[i];
    }

    string s;
    cin >> s;

    int totalCalories=0;

    for(char c:s){
        int digit=c-'0';
        totalCalories+=a[digit];
    }

    cout<<totalCalories<<endl;
    return 0;
}