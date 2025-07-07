#include<bits/stdc++.h>
int main(){
    string word;
    cin>>word;

    int uppercase=0;
    int lowercase=0;

    for(char c:word){
        if(isupper(c))
            uppercase++;
        else
            lowercase++;
    }

    if(uppercase>lowercase){
        for(char &c:word){
            c=toupper(c);
        }
    } else{
        for(char &c:word){
            c=tolower(c);
        }
    }
    cout<<word<<endl;
    return 0;
}