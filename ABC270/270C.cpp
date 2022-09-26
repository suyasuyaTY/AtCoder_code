#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,X,Y;
    cin>>N>>X>>Y;
    vector<vector<int>> P(N+1);
    for(int i=0;i<N-1;i++){
        int u,v;
        cin>>u>>v;
        P.at(u).push_back(v);
        P.at(v).push_back(u);
    }
    vector<int> d(N+1,-1);
    d.at(X)=0;
    queue<int> pq;
    pq.push(X);
    while(!pq.empty()){
        int k;
        k=pq.front();pq.pop();
        for(int i=0;i<P.at(k).size();i++){
            if(d.at(P[k][i])==-1){
                d.at(P[k][i])=d.at(k)+1;
                pq.push(P[k][i]);
            }
        }
    }
    int dis=d.at(Y),p=Y;
    vector<int> ans(dis+1);
    ans.at(dis)=Y;
    while(dis>0){
        for(int j=0;j<P.at(p).size();j++){
            if(d[P[p][j]]==dis-1){
                p=P[p][j];
                dis--;
                ans.at(dis)=p;
                break;
            }
        }
    }
    for(int i=0;i<d.at(Y)+1;i++){
        cout<<ans.at(i)<<' ';
    }
    cout<<endl;
}