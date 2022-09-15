#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    vector<int64_t> A(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    vector<int64_t> A_Mseries(N-M+1);
    for(int i=0;i<M;i++){
        A_Mseries.at(0)+=A.at(i);
    }
    for(int i=1;i<N-M+1;i++){
        A_Mseries.at(i)=A_Mseries.at(i-1)-A.at(i-1)+A.at(i+M-1);
    }
    int64_t answer=0;
    for(int i=0;i<M;i++){
        answer+=(i+1)*A.at(i);
    }
    int64_t tmp=answer;
    for(int i=1;i<N-M+1;i++){
        tmp=tmp-A_Mseries.at(i-1)+M*A.at(i+M-1);
        answer=max(tmp,answer);
    }
    cout<<answer<<endl;
    return 0;
}
