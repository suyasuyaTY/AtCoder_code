#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y;
    cin>>Y;
    if(Y%4==0 || Y%4==1){
        Y+=2-Y%4;
    }
    if(Y%4==3){
        Y+=3;
    }
    cout<<Y<<endl;
}