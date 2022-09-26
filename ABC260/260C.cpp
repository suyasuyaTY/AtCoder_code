#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,X,Y;
    cin>>N>>X>>Y;
    vector<int64_t> red(N+1),brue(N+1);
    red.at(N)=1;
    for(int i=N;i>=2;i--){
        int64_t r=red.at(i);
        red.at(i)=0;
        red.at(i-1)+=r;
        brue.at(i)+=r*X;
        int64_t b=brue.at(i);
        brue.at(i)=0;
        red.at(i-1)+=b;
        brue.at(i-1)+=b*Y;
    }
    cout<<brue.at(1)<<endl;
}