#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,C;
    cin>>N>>C;
    bitset<30> n(C);
    vector<pair<int,int>> ta(N);
    for(int i=0;i<N;i++){
        cin>>ta.at(i).first>>ta.at(i).second;
    }
    bitset<30> all_1,all_0(0);
    all_1.set();
    for(int i=0;i<N;i++){
        int t,a;
        tie(t,a)=ta.at(i);
        bitset<30> A(a);
        if(t==1){
            all_0&=A;
            all_1&=A;
        }
        else if(t==2){
            all_0|=A;
            all_1|=A;
        }
        else{
            all_0^=A;
            all_1^=A;
        }
        bitset<30> new_n(0);
        for(int j=0;j<30;j++){
            if(n.test(j)){
                if(all_1.test(j)){
                    new_n.set(j,1);
                }
            }
            else{
                if(all_0.test(j)){
                    new_n.set(j,1);
                }
            }
        }
        swap(n,new_n);
        cout<<n.to_ulong()<<endl;
    }
}