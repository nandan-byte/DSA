#includ<iostream>
using namespace std;

int main()
{
  char ch;
  int num;
  cout<<"Enter any character to print pattern: ";
  cin>>ch;
  cout<<"Enter number of rows to print: ";
  cin>>num;
  for(int i=1;i<=num;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<ch<<" ";
    }
    cout<<endl;
  }
return 0;
}
