#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int maxSubarray(vector<int>& nums){
  long long sum=0;
  long long maxi=LONG_MIN;

  for(int i=0; i<nums.size(); i++){
    sum += nums[i];

    if(sum > maxi){
      maxi=sum;
    }
    if(sum<0){
      sum=0;
    }
  }
  return maxi;
}
};

int main(){
  Solution obj;
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int result = obj.maxSubarray(nums);

  cout<<"Maximum subarray sum = " << result<< endl;
  return 0;
}
