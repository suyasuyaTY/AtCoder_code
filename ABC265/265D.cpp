#include <bits/stdc++.h>
using namespace std;

int  binary_search(int x,int w,int64_t p,vector<int64_t> &S){
    int lb=x,ub=w;
    while(ub-lb>1){
        int i=lb+(ub-lb)/2;
        if(S.at(i)-S.at(x)>=p) ub=i;
        else lb=i; 
    }
    if(S.at(ub)-S.at(x)==p) return ub;
    else return -1;
}

int main() {
    int N;
    int64_t P,Q,R,U;
    int x=0,y=1,z=2,w=3;
    cin>>N>>P>>Q>>R;
    U=P+Q+R;
    vector<int64_t> A(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    vector<int64_t> S(N+1);
    for(int i=1;i<=N;i++){
        S.at(i)=S.at(i-1)+A.at(i-1);
    }
    while(x<=N-3){
        if(S.at(w)-S.at(x)>U){
            x++;
        }
        else if(S.at(w)-S.at(x)<U){
            if(w==N) break;
            w++;
        }
        else{
            y=binary_search(x,w,P,S);
            if(y!=-1){
                z=binary_search(y,w,Q,S);
                if(z!=1){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
            if(w==N) break;
            else{
                w++;
                continue;
            }

        }
    }
    cout<<"No"<<endl;
    return 0;
}
