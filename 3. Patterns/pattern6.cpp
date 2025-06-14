#include<bits/stdc++.h>
using namespace std;
void printPattern6(int n){
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    cout<<endl;
  }
}
int main(){
  int rows;
  cout<<"Enter the number of rows: ";
  cin>>rows;
  printPattern6(rows);
  return 0;
}
