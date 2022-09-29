#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int64_t> X(N),Y(N),P(N);
    for(int i=0;i<N;i++){
        cin>>X.at(i)>>Y.at(i)>>P.at(i);
    }
    int64_t ans=4e9;
    for(int i=0;i<N;i++){
        int64_t res=0;
        vector<int64_t> need_S(N,4e9);
        need_S.at(i)=0;
        queue<int> p;
        p.push(i);
        while(!p.empty()){
            int v=p.front();
            p.pop();
            for(int j=0;j<N;j++){
                int64_t d=abs(X.at(v)-X.at(j))+abs(Y.at(v)-Y.at(j));
                int64_t s=max(need_S.at(v),(d+P.at(v)-1)/P.at(v));
                if(need_S.at(j)>s){
                    need_S.at(j)=s;
                    p.push(j);
                }
            }
        }
        for(int j=0;j<N;j++){
            res=max(res,need_S.at(j));
        }
        ans=min(ans,res);
    }
    cout<<ans<<endl;
}