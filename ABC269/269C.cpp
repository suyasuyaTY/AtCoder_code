#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N,n=0;
    cin>>N;
    vector<int> S(0);
    for(int i=0;i<60;i++){
        if(((N>>i)&1)==1){
            S.push_back(i);
            n++;
        }
    }
    for(int i=0;i<(1<<n);i++){
        unsigned long long a=0;
        for(int j=0;j<n;j++){
            if(((i>>j)&1)==1){
                a=a|(1ull<<S.at(j));
            }
        }
        cout<<a<<endl;
    }
}