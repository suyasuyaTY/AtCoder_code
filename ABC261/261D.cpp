#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    vector<int> X(N+1);
    for(int i=1;i<=N;i++){
        cin>>X.at(i);
    }
    vector<int> C(N+1);
    for(int i=0;i<M;i++){
        int c,y;
        cin>>c>>y;
        C.at(c)=y;
    }
    vector<int64_t> dp(N+1,-1);
    dp.at(0)=0;
    for(int i=1;i<=N;i++){
        vector<int64_t> xdp(N+1);
        for(int j=1;j<=i;j++){
            xdp.at(0)=max(xdp.at(0),dp.at(j-1));
            xdp.at(j)=dp.at(j-1)+X.at(i)+C.at(j);
        }
        swap(dp,xdp);
    }
    int64_t ans=0;
    for(int i=0;i<=N;i++){
        ans=max(ans,dp.at(i));
    }
    cout<<ans<<endl;
}