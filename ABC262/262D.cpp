#include <bits/stdc++.h>
using namespace std;

int i_remainder(int i,int N,vector<int> &A){
    vector<vector<int>> dp(i+1,vector<int>(i));
    dp.at(0).at(0)=1;
    for(int n=0;n<N;n++){
        int r=A.at(n)%i;
        for(int a=i;a>0;a--){
            for(int b=0;b<i;b++){
                dp.at(a).at(b)+=dp.at(a-1).at((b-r+i)%i);
                dp.at(a).at(b)%=998244353;
            }
        }
        
    }
    return dp.at(i).at(0);
}

int main() {
    int N;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    int ans=0;
    for(int i=1;i<=N;i++){
        ans+=i_remainder(i,N,A);
        ans%=998244353;
    }
    cout<<ans<<endl;
}