#include<bits/stdc++.h>
using namespace std;
void printPattern8(int n){
  for(int i=n;i>0;i--){
    for(int j=0; j<n-i; j++){
      cout<<" ";
    }
    for(int j=0;j<2*i-1;j++){
      cout<<"*";
    }
    for(int j=0;j<n-i;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int rows;
  cout<<"Enter the number of rows: ";
  cin>>rows;
  printPattern8(rows);
  return 0;
}
