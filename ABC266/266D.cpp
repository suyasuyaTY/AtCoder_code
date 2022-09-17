#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,k=0;
    cin>>N;
    vector<int> T(N),X(N),A(N);
    for(int i=0;i<N;i++){
        cin>>T.at(i)>>X.at(i)>>A.at(i);
    }
    vector<int64_t> dp(5,-5*1e9);
    dp.at(0)=0;
    for(int i=1;i<=T.at(N-1);i++){
        vector<int64_t> copy(5);
        copy.at(0)=max(dp.at(0),dp.at(1));
        copy.at(4)=max(dp.at(3),dp.at(4));
        for(int j=1;j<4;j++){
            copy.at(j)=max(dp.at(j-1),max(dp.at(j),dp.at(j+1)));
        }
        if(i==T.at(k)){
            copy.at(X.at(k))+=A.at(k);
            k++;
        }
        for(int j=0;j<5;j++){
            dp.at(j)=copy.at(j);
        }
    }
    cout<<*max_element(dp.begin(),dp.end())<<endl;
}
