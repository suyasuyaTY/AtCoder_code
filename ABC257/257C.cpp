#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string s;
    cin>>N>>s;
    vector<int> W_0,W_1;
    for(int i=0;i<N;i++){
        int w;
        cin>>w;
        if(s.at(i)=='0'){
            W_0.push_back(w);
        }
        else{
            W_1.push_back(w);
        }
    }
    sort(W_0.begin(),W_0.end());
    sort(W_1.begin(),W_1.end());
    int res=0,n=W_0.size(),m=W_1.size();
    for(int i=0;i<n;i++){
        auto Iter=upper_bound(W_1.begin(),W_1.end(),W_0.at(i));
        res=max(res,i+1+(int)(W_1.end()-Iter));
    }
    for(int i=0;i<m;i++){
        auto Iter=lower_bound(W_0.begin(),W_0.end(),W_1.at(i));
        res=max(res,m-i+(int)(Iter-W_0.begin()));
    }   
    cout<<res<<endl;
}