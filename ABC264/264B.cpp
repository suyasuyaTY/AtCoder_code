#include <bits/stdc++.h>
using namespace std;

int main() {
    int R,C;
    cin>>R>>C;
    if(R>8) R=16-R;
    if(C>8) C=16-C;
    if(R>C) swap(R,C);
    if(R%2==1){
        cout<<"black"<<endl;
    }
    else{
        cout<<"white"<<endl;
    }
}