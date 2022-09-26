#include <bits/stdc++.h>
using namespace std;

int main() {
    int L_1,R_1,L_2,R_2;
    cin>>L_1>>R_1>>L_2>>R_2;
    cout<<max(min(R_1,R_2)-max(L_1,L_2),0)<<endl;
}