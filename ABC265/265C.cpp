#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,W;
    cin>>H>>W;
    vector<string> G(H);
    for(int i=0;i<H;i++){
        cin>>G.at(i);
    }
    vector<vector<bool>> A(H,vector<bool>(W));
    int x=0,y=0;
    while (true){
        A.at(y).at(x)=true;
        if(G.at(y).at(x)=='U'){
            if(y==0){
                cout<<y+1<<' '<<x+1<<endl;
                return 0;
            }
            y--;
        }
        else if(G.at(y).at(x)=='D'){
            if(y==H-1){
                cout<<y+1<<' '<<x+1<<endl;
                return 0;
            }
            y++;
        }
        else if(G.at(y).at(x)=='L'){
            if(x==0){
                cout<<y+1<<' '<<x+1<<endl;
                return 0;
            }
            x--;
        }
        else{
            if(x==W-1){
                cout<<y+1<<' '<<x+1<<endl;
                return 0;
            }
            x++;
        }
        if(A.at(y).at(x)){
            cout<<-1<<endl;
            return 0;
        }
    }
}
