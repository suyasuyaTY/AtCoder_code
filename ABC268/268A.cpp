#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> A(101);
  for(int i=0;i<5;i++){
    int a;
    cin>>a;
    A.at(a)+=1;
  }
  int answer=0;
  for(int i=0;i<=100;i++){
    if(A.at(i)>0){
      answer+=1;
    }
  }
  cout<<answer<<endl;
  return 0;
}