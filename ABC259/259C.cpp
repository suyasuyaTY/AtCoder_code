#include <bits/stdc++.h>
using namespace std;

void string_change(string &s,vector<pair<char,int>> &S){
    for(int i=0;i<s.size();i++){
        char a=s.at(i);
        if(S.size()>0 && a==S.back().first){
            S.back().second++;
        }
        else{
            S.push_back({a,1});
        }
    }
}

int main() {
    string s,t;
    cin>>s>>t;
    vector<pair<char,int>> S,T;
    string_change(s,S);
    string_change(t,T);
    if(S.size()!=T.size()){
        cout<<"No"<<endl;
    }
    else{
        bool ans=true;
        for(int i=0;i<S.size();i++){
            if(S[i].first==T[i].first){
                int n=S[i].second,m=T[i].second;
                if((n==1 && m==1) || (n>=2 && n<=m)) continue;
            }
            ans=false;
            break;
        }
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}