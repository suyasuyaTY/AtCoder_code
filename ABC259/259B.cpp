#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,d;
    cin>>a>>b>>d;
    double cos_d=cos(d/180*M_PI),sin_d=sin(d/180*M_PI);
    cout<<fixed<<setprecision(16)<<a*cos_d-b*sin_d<<' '<<a*sin_d+b*cos_d<<endl;
}