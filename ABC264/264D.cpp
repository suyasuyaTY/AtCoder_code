#include <bits/stdc++.h>
using namespace std;

int chat_int(char a){
    if(a=='a') return 1;
    if(a=='t') return 2;
    if(a=='c') return 3;
    if(a=='o') return 4;
    if(a=='d') return 5;
    if(a=='e') return 6;
    if(a=='r') return 7;
    return -1;
}

int main() {
    string S;
    cin>>S;
    int ans=0;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(chat_int(S.at(i))>chat_int(S.at(j))){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}