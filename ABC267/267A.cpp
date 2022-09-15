#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int> S;
    S["Monday"]=5;
    S["Tuesday"]=4;
    S["Wednesday"]=3;
    S["Thursday"]=2;
    S["Friday"]=1;
    string s;
    cin>>s;
    if (S.count(s)){
        cout<<S[s]<<endl;
    }
}
