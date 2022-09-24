#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    vector<vector<int>> P(N+1,vector<int>(N+1));
    for(int i=0;i<M;i++){
        int u,v;
        cin>>u>>v;
        P.at(u).at(v)=1;
        P.at(v).at(u)=1;
    }
    int ans=0;
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            for(int k=j+1;k<=N;k++){
                if(P[i][j]==1 && P[j][k]==1 && P[k][i]==1){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}