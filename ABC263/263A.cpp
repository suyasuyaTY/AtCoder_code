#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> num(14);
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        num.at(a)+=1;
    }
    bool num2=false,num3=false;
    for(int i=1;i<=13;i++){
        if(num.at(i)==2){
            num2=true;
        }
        if(num.at(i)==3){
            num3=true;
        }
    }
    if(num2 && num3){
        cout<<"Yes"<<endl;
    }    
    else{
        cout<<"No"<<endl;
    }
}