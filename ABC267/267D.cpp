#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    vector<int64_t> A(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    vector<int64_t> dp(M+1,-9223372036854775808);
    dp.at(0)=0;
    dp.at(1)=A.at(0);
    for(int i=1;i<N;i++){
        for(int j=min(i+1,M);j>0;j--){
            dp.at(j)=max(dp.at(j-1)+j*A.at(i),dp.at(j));
        }
    }
    cout<<dp.at(M)<<endl;
}