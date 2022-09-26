#include <bits/stdc++.h>
using namespace std;

void succses(int N,int X,vector<pair<int,int>> &A,map<int,int> &succses_p){
    for(int i=0,n=0;i<N && n<X;i++){
        if(succses_p[-A.at(i).second]==0){
            succses_p[-A.at(i).second]=1;
            n++;
        }
    }
}

int main() {
    int N,X,Y,Z;
    cin>>N>>X>>Y>>Z;
    vector<int> a(N),b(N);
    vector<pair<int,int>> A(N),B(N),C(N);
    for(int i=0;i<N;i++){
        cin>>a.at(i);
    }
    for(int i=0;i<N;i++){
        cin>>b.at(i);
    }
    for(int i=0;i<N;i++){
        A.at(i)={a.at(i),-(i+1)};
        B.at(i)={b.at(i),-(i+1)};
        C.at(i)={a.at(i)+b.at(i),-(i+1)};
    }
    sort(A.begin(),A.end());reverse(A.begin(),A.end());
    sort(B.begin(),B.end());reverse(B.begin(),B.end());
    sort(C.begin(),C.end());reverse(C.begin(),C.end());
    map<int,int> succses_p;
    succses(N,X,A,succses_p);
    succses(N,Y,B,succses_p);
    succses(N,Z,C,succses_p);
    for(int i=1;i<=N;i++){
        if(succses_p[i]==1){
            cout<<i<<endl;
        }
    }
}