#include <bits/stdc++.h>
using namespace std;

int N;

void binary_search1(int &A,int &B){
    int h=(A+B)/2;
    cout<<"? "<<A<<' '<<h<<' '<<1<<' '<<N<<endl;
    int T;
    cin>>T;
    if(h-A+1==T){
        A=h+1;
    }
    else{
        B=h;
    }
}

void binary_search2(int &C,int &D){
    int h=(C+D)/2;
    cout<<"? "<<1<<' '<<N<<' '<<C<<' '<<h<<endl;
    int T;
    cin>>T;
    if(h-C+1==T){
        C=h+1;
    }
    else{
        D=h;
    }
}

int main() {
    cin>>N;
    int A=1,B=N,C=1,D=N;
    for(int i=0;i<20;i++){
        if(A!=B){
            binary_search1(A,B);
        }
        else if(C!=D){
            binary_search2(C,D);
        }
        else{
            break;
        }
    }
    cout<<"! "<<A<<' '<<C<<endl;
}