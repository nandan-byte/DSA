#include<iostream>
#include<vector>
void moveAllzerostoend(vector<int>& nums){
  int n=nums.size();
  int index=0;
  for(int i=0;i<n;i++){
    if(nums[i] != 0){
      nums[index++] = nums[i];
    }
  }
   while(index < n){
    nums[index++]=0;
  }
}
using namespace std;
int main(){
  cout<<"Enter the size of the array: ";
  int n;
  cin>>n;
  cout<<"Enter array elements: ";
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  moveAllzerostoend(arr);
  return 0;
}
