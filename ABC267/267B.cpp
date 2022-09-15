#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    map<int,int> check_1;
    if(s.at(6)=='1') check_1[0]=1;
    if(s.at(3)=='1') check_1[1]=1;
    if(s.at(2)=='1'||s.at(7)=='1') check_1[2]=1;
    if(s.at(4)=='1') check_1[3]=1;
    if(s.at(2)=='1'||s.at(8)=='1') check_1[4]=1;
    if(s.at(5)=='1') check_1[5]=1;
    if(s.at(9)=='1') check_1[6]=1;
    map<int,int> check_2;
    if(s.at(6)=='0') check_2[0]=1;
    if(s.at(3)=='0') check_2[1]=1;
    if(s.at(2)=='0'&&s.at(7)=='0') check_2[2]=1;
    if(s.at(4)=='0') check_2[3]=1;
    if(s.at(2)=='0'&&s.at(8)=='0') check_2[4]=1;
    if(s.at(5)=='0') check_2[5]=1;
    if(s.at(9)=='0') check_2[6]=1;
    if(s.at(0)=='1'){
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<6;i++){
        if(check_1[i]==0){
            continue;
        }
        for(int j=i+2;j<=6;j++){
            if(check_1[j]==0){
                continue;
            }
            for(int k=i+1;k<j;k++){
                if(check_2[k]==1){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
