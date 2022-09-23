#include <bits/stdc++.h>
using namespace std;

int main() {
    int L,R;
    string A="atcoder";
    cin>>L>>R;
    for(int i=L;i<=R;i++){
        cout<<A.at(i-1);
    }
}