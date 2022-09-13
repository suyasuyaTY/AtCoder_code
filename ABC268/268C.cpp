#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> match_num(N);
    for(int i=0;i<N;i++){
        int p,times;
        cin>>p;
        times=p-i+(p<i?N:0);
        match_num.at((times+N-1)%N)+=1;
        match_num.at(times)+=1;
        match_num.at((times+1)%N)+=1;
    }
    int answer=-1;
    for(int i=0;i<N;i++){
        answer=max(answer,match_num.at(i));
    }
    cout<<answer<<endl;
    return 0;
}