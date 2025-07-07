#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        string word;
        cin>>word;

        if(word.length()>10){
            cout<<word[0]<<word.length()-2<<word.back()<<endl;
        }else{
            cout<<word<<endl;
        }
    }
    return 0;
}