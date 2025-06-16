#include<iostream>
#include<vector>
using namespace std;
int maxelement2(vector<int>& nums){
int n=nums.size();
int max1=INT_MIN;
int max2=INT_MIN;
for(auto num : nums){
  if(num > max1){
    max2=max1;
    max1=num;
  }else if(num > max2 && num != max1){
    max2=num;
  }
 }
  return (max2 == INT_MIN) ? -1 : max2;
}
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter array elements: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max2 = maxelement2(arr);
  cout<<"Your 2nd maximum element is: "<<max2;
  return 0;
}
//Time Complexity = O(n)
//Space Complexity = O(1)
