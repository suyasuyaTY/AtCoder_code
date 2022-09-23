#include <bits/stdc++.h>
using namespace std;

int H_1,W_1,H_2,W_2;

bool count_1(int N,int M,vector<int> &p,vector<int> &q){
    int n=0,m=0;
    for(int i=0;i<H_1;i++){
        if(N&(1<<i)){
            n++;
            p.push_back(i);
        }
    }
    for(int i=0;i<W_1;i++){
        if(M&(1<<i)){
            m++;
            q.push_back(i);
        }
    }
    if(n!=H_2 || m!=W_2) return false;
    else return true;
}

bool if_same(vector<vector<int>> &A,vector<vector<int>> &B,vector<int> &p,vector<int> &q){
    for(int i=0;i<H_2;i++){
        for(int j=0;j<W_2;j++){
            if(A.at(p.at(i)).at(q.at(j))!=B.at(i).at(j)){
                return false;
            }
        }
    }
    return true;
}

int main() {
    cin>>H_1>>W_1;
    vector<vector<int>> A(H_1,vector<int>(W_1));
    for(int i=0;i<H_1;i++){
        for(int j=0;j<W_1;j++){
            cin>>A.at(i).at(j);            
        }
    }
    cin>>H_2>>W_2;
    vector<vector<int>> B(H_2,vector<int>(W_2));
    for(int i=0;i<H_2;i++){
        for(int j=0;j<W_2;j++){
            cin>>B.at(i).at(j);            
        }
    }
    for(int i=0;i<(1<<H_1);i++){
        for(int j=0;j<(1<<W_1);j++){
            vector<int> p(0),q(0);
            if(!count_1(i,j,p,q)) continue;
            if(if_same(A,B,p,q)){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
}