#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k=0;
    int64_t t;
    cin>>n>>m>>t;
    vector<int64_t> A(n),X(m),Y(m);
    for(int i=1;i<n;i++){
        cin>>A.at(i);
    }
    for(int i=0;i<m;i++){
        cin>>X.at(i)>>Y.at(i);
    }
    for(int i=1;i<n;i++){
        if(k<m && i==X.at(k)){
            t+=Y.at(k);
            k++;
        }
        t-=A.at(i);
        if(t<=0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}