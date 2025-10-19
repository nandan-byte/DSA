#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
int printMaxSubArray(vector<int>& nums){
  long long sum=0, maxi=INT_MIN;
int start;
int ansStart,ansEnd;
  for(int i=0;i<nums.size(); i++){
    if(sum==0) start=i;
    sum += nums[i];

    if(sum > maxi){
      maxi=sum;
      ansStart=start;
      ansEnd=i;
    }
    if(sum<0){
      sum=0;
    }
  }
  cout<<"Maximum SubArray elements are: ";
  for(int i=ansStart; i<=ansEnd; i++){
    cout<<nums[i]<<" ";
  }
  cout<<endl;
  return maxi;
}
};

int main(){
  Solution obj;
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int result = obj.printMaxSubArray(nums);
  cout<<"Maximum SubArray sum = "<<result<<endl;
  return 0;
}
