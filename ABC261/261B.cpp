#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<string> A(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(A.at(i).at(j)=='W' && A.at(j).at(i)=='L'){
                continue;
            }
            else if(A.at(i).at(j)=='D' && A.at(j).at(i)=='D'){
                continue;
            }
            else if(A.at(i).at(j)=='L' && A.at(j).at(i)=='W'){
                continue;
            }
            else{
                cout<<"incorrect"<<endl;
                return 0;
            }
        }
    }
    cout<<"correct"<<endl;
    return 0;
}