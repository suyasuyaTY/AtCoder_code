#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=1e9,b=-1e9,c=1e9,d=-1e9;
    vector<string> S(10);
    for(int i=0;i<10;i++){
        cin>>S.at(i);
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(S.at(i).at(j)=='#'){
                a=min(a,i+1);
                b=max(b,i+1);
                c=min(c,j+1);
                d=max(d,j+1);
            }
        }
    }
    cout<<a<<' '<<b<<endl;
    cout<<c<<' '<<d<<endl;
}