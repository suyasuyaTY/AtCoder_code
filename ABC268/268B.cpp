#include <bits/stdc++.h>
using namespace std;

int main() {
    string S,T;
    cin>>S>>T;
    bool judge=true;
    if(S.size()>T.size()){
        cout<<"No"<<endl;
    }
    else{
        for(int i=0;i<S.size();i++){
            if(S.at(i)==T.at(i)) continue;
            judge=false;
            break;
        }
        cout<<(judge?"Yes":"No")<<endl;
    }
    return 0;
}
