#include<iostream>
#include<vector>
using namespace std;

class Solution{
public :
int removeDuplicate(vector<int>& nums){
  int n=nums.size();
  int cnt=0;
  for(int i=1;i<n;i++){
    if(nums[cnt] != nums[i]){
      nums[cnt+1] = nums[i];
      cnt++;
    }
  }
  return (cnt+1);
}
};
int main(){
  Solution sol;
  cout<<"Enter size of array: ";
  int n;
  cin>>n;
  cout<<"Enter the array elements: ";
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 int result=sol.removeDuplicate(arr);
  cout<<"Unique elements are: ";
    for(int i=0;i<result;i++){
    cout<<arr[i];
  }
}
