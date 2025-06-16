#include<iostream>
#include<vector>
using namespace std;
int maxelement3(vector<int>& nums){
int n=nums.size();
int max1=INT_MIN;
int max2=INT_MIN;
int max3=INT_MIN;
for(auto num : nums){
  if(num==max1 || num==max2 || num==max3) continue;
  if(num > max1){
    max3=max2;
    max2=max1;
    max1=num;
  }else if(num > max2){
    max3=max2;
    max2=num;
  }
  else if(num > max3){
    max3=num;
  }
 }
  return (max3 == INT_MIN) ? -1 : max3;
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
  int max3 = maxelement3(arr);
  cout<<"Your 3rd maximum element is: "<<max3;
  return 0;
}
//Time Complexity = O(n)
//Space Complexity = O(1)
