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

/*Logic to Solve the pyramind:
  space   star  space
    4       1     4                _ _ _ _ * _ _ _ _
    3       3     3                _ _ _ * * * _ _ _          
    2       5     2                _ _ * * * * * _ _   
    1       7     1                _ * * * * * * * _          
    0       9     0                * * * * * * * * *            
n-i-1     2*i+1   n-i-1  
*/
