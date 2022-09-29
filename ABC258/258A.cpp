#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    cin>>K;
    if(K<10){
        cout<<"21:0"<<K<<endl;
    }
    else if(K<60){
        cout<<"21:"<<K<<endl;
    }
    else if(K<70){
        cout<<"22:0"<<K%60<<endl;
    }
    else{
        cout<<"22:"<<K%60<<endl;
    }
}