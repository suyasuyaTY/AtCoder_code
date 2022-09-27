#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,S=-1,T=-1;
    cin>>N;
    pair<int64_t,int64_t> s,t;
    cin>>s.first>>s.second>>t.first>>t.second;
    vector<int64_t> X(N),Y(N),R(N);
    for(int i=0;i<N;i++){
        cin>>X.at(i)>>Y.at(i)>>R.at(i);
    }
    vector<vector<int>> p(N,vector<int>(N));
    for(int i=0;i<N;i++){
        int64_t x_s=s.first-X[i],y_s=s.second-Y[i];
        if(x_s*x_s+y_s*y_s==R[i]*R[i]){
            S=i;
        }
        int64_t x_t=t.first-X[i],y_t=t.second-Y[i];
        if(x_t*x_t+y_t*y_t==R[i]*R[i]){
            T=i;
        }
        for(int j=i+1;j<N;j++){
        int64_t d=(X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j]);
            if((R[i]+R[j])*(R[i]+R[j])>=d && d>=(R[i]-R[j])*(R[i]-R[j])){
                p[i][j]=1;
                p[j][i]=1;
            }
        }
    }
    vector<bool> seen(N,false);
    queue<int> next_v;
    next_v.push(S);
    seen[S]=true;
    while(!next_v.empty()){
        int v=next_v.front();
        next_v.pop();
        for(int i=0;i<N;i++){
            if(p[v][i]==1 && !seen[i]){
                next_v.push(i);
                seen[i]=true;
            }
        }
    }
    if(seen[T]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}