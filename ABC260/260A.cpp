#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> n(26);
    for(int i=0;i<3;i++){
        char a;
        cin>>a;
        n.at(a-'a')+=1;
    }
    for(int i=0;i<26;i++){
        if(n.at(i)==1){
            char b='a'+i;
            cout<<b<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}