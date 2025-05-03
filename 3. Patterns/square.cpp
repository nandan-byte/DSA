#include<iostream>
using namespace std;

int main()
{
  char ch;
  int num;
  
  cout<<"Enter any character to print the square pattern: ";
  cin>>ch;
  cout<<"Enter the size of the square: "<<endl;
  cin>>num;
  
  for(int i=0;i<num;i++)
  {
    for(int j=0;j<num;j++)
    {
      cout<<ch<<" ";
    }
    cout<<endl;
 }
  return 0;
}
