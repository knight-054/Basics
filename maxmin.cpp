#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b) 
        if(a>c) {
    cout<<a;
    } else{
        cout<<c;
    } if(b>a){
        if(b>c){
            cout<<b;
        } else{
            cout<<c;
        }
    }
    }