#include <bits/stdc++.h>
using namespace std;

int main() {
    int X,Y,N;
    cin>>X>>Y>>N;
    if(X*3<=Y){
        cout<<X*N<<endl;
    }
    else{
        cout<<Y*(N/3)+X*(N%3)<<endl;
    }
}
