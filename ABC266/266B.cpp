#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n,x;
    cin>>n;
    x=n%998244353;
    if (x<0){
        x+=998244353;
    }
    cout<<x<<endl;
}
