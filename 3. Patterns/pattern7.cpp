#include<bits/stdc++.h>
using namespace std;
void printPattern7(int n){
  for(int i=0;i<n;i++){
      for(int j=0;j<n-1-i;j++){
        cout<<" ";
      }
    for(int j=0;j<2*i+1;j++){
      cout<<"*";
    }
    for(int j=0;j<n-1-i;j++){
        cout<<" ";
      }
    cout<<endl;
  }
}
int main(){
  int rows;
  cout<<"Enter the number of rows: ";
  cin>>rows;
  printPattern7(rows);
  return 0;
}
