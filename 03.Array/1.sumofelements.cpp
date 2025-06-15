#include<bits/stdc++.h>
using namespace std;

int main() {
  cout<<"Enter the size of the array: ";
  int n;
  cin>>n;
 // int arr[n]; // ⚠️ Variable Length Arrays (VLA) are not standard in C++
  vector<int> arr(n);
  cout<<"Enter your array elements to calculate sum: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
	// int arr[5]={4,5,3,6,3};
	int sum=0;
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
	}
	cout<<"Total sum of array is: "<<sum;
	return 0;
}
