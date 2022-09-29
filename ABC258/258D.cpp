#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,X;
    cin>>N>>X;
    vector<int64_t> A(N+1),B(N+1);
    for(int i=1;i<=N;i++){
        cin>>A[i]>>B[i];
    }
    int64_t ans=2000000000000000000ll,r=0;
    for(int i=1;i<=min(N,X);i++){
        r+=A[i]+B[i];
        ans=min(ans,r+B[i]*(X-i));
    }
    cout<<ans<<endl;
}