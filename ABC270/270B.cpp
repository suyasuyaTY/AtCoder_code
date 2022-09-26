#include <bits/stdc++.h>
using namespace std;

int main() {
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if(X>0){
        if(X<Y || Y<0){
            cout<<X<<endl;
        }
        else if(Y<Z){
            cout<<-1<<endl;
        }
        else if(Z>0){
            cout<<X<<endl;
        }
        else{
            cout<<X+2*(-Z)<<endl;
        }
    }
    else{
        if(Y>0 || Y<X){
            cout<<-X<<endl;
        }
        else if(Z<Y){
            cout<<-1<<endl;
        }
        else if(Z<0){
            cout<<-X<<endl;
        }
        else{
            cout<<-X+2*Z<<endl;
        }
    }

}