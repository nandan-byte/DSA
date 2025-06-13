#include<bits/stdc++.h>
using namespace std;
void printpattern4(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<i;
    }
    cout<<endl;
  }
}
int main(){
  int rows;
  cout<<"Enter the number of rows";
  cin>>rows;

  printpattern4(rows);
  return 0;
}
