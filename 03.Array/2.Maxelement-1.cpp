// Time Complexity = O(N)
//Space Complexity = O(1)
#include<iostream>
#include<vector>
using namespace std;
int maxelement1(vector<int>& nums){
  int n=nums.size();
  int max1=INT_MIN;
  for(int i=0;i<n;i++){
    if(nums[i] > max1){
      max1=nums[i];
    }
  }
  return max1;
}
int main(){
  cout<<"Enter the size of array: ";
  int n;
  cin>>n;
  vector<int> largest(n);
  for(int i=0;i<n;i++){
    cin >> largest[i];
  }
  int maxval=maxelement1(largest);
  cout<<"Maximum element in array is: "<<maxval;
  return 0;
}
//STL function int maxVal = *max_element(v.begin(), v.end());
//Same for the above STL function
// Time Complexity = O(N)
//Space Complexity = O(1)
