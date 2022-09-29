#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,Q;
    cin>>N>>Q;
    string s;
    cin>>s;
    vector<int> t(Q),q(Q);
    for(int i=0;i<Q;i++){
        cin>>t[i]>>q[i];
    }
    int r=0;
    for(int i=0;i<Q;i++){
        if(t[i]==1){
            r+=q[i];
            r%=N;
        }
        else{
            cout<<s[(q[i]-1-r+N)%N]<<endl;
        }
    }
}