#include <bits/stdc++.h>
using namespace std;

vector<int> dx={0,1,0,-1,1,1,-1,-1};
vector<int> dy={1,0,-1,0,1,-1,-1,1};


int64_t f(int i,int j,int k,int N,vector<vector<int>> &A){
    int64_t ans=0;
    for(int l=0;l<N;l++){
        ans*=10;
        ans+=A[(i+l*dy[k]+N)%N][(j+l*dx[k]+N)%N];
    }
    return ans;
}

int main() {
    int N;
    cin>>N;
    vector<vector<int>> A(N,vector<int>(N));
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        for(int j=0;j<N;j++){
            A[i][j]=s[j]-'0';
        }
    }
    int64_t res=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<8;k++){
                res=max(res,f(i,j,k,N,A));
            }
        }
    }
    cout<<res<<endl;
}