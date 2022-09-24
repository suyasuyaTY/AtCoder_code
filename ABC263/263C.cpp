#include <bits/stdc++.h>
using namespace std;

int N,M;

void increasing(vector<int> &s,int n,int m){
    if(n==N){
        for(int i=0;i<N;i++){
            cout<<s.at(i)<<' ';
        }
        cout<<endl;
        return;
    }
    for(int i=m;i<=M;i++){
        s.at(n)=i;
        increasing(s,n+1,i+1);
    }
    return;
}

int main() {
    cin>>N>>M;
    vector<int> s(N);
    increasing(s,0,1);
}