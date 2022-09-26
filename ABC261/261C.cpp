#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++){
        cin>>S.at(i);
    }
    map<string,int> P;
    for(int i=0;i<N;i++){
        string s=S[i];
        if(P.count(s)){
            cout<<s<<'('<<P[s]<<')'<<endl;
            P[s]+=1;
        }
        else{
            cout<<s<<endl;
            P[s]=1;
        }
    }
}