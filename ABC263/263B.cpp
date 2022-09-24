#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,n,t=0;
    cin>>N;
    vector<int> P(N+1);
    for(int i=2;i<=N;i++){
        cin>>P.at(i);
    }
    n=N;
    while(n!=1){
        n=P.at(n);
        t++;
    }
    cout<<t<<endl;
}