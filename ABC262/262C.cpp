#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int64_t ans=0,match=0;
    cin>>N;
    vector<int> A(N+1);
    for(int i=1;i<=N;i++){
        cin>>A.at(i);
    }
    for(int i=1;i<=N;i++){
        int j=A.at(i);
        if(i<j){
           if(i==A.at(j)){
            ans++;
           } 
        }
        if(i==j){
            match++;
        }
    }
    ans+=(match*(match-1))/2;
    cout<<ans<<endl;
}