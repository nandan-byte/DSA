#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
void rotateElements(vector<int>& nums, int k){
  vector<int> temp(k);
  int n=nums.size();
  if(n==0 || k==0) return;
  k=k%n;
  if(k==0) return;
  for(int i=0;i<k;i++){
   temp[i] = nums[(n-k) + i];
  }
  for(int i=n-1;i >= k;i--){
    nums[i] = nums[i-k];
  }
  for(int i=0;i <k;i++){
    nums[i] = temp[i];
  }
}
};
int main(){
  Solution sol;
  cout<<"Enter size of array: ";
  int n;
  cin>>n;
  cout<<"Enter size of k: ";
  int k;
  cin>>k;
  cout<<"Enter the array elements: ";
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sol.rotateElements(arr, k);
  cout<<"Rotated by "<< k <<" elements are: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
//Time Complexity = O(N)
//Example: [1,2,3,4,5,6,7]; n=7; k=3;
//at first for loop runs k times = 3 times;
//at second for loop runs n-k times = 4 times;
//at third for loop runs k itmes = 3 times;
//k (copy temp)  
//+ (n - k) (shift elements)  
//+ k (copy back to front)  
//= k + (n - k) + k
//= k + n - k + k  
//= n + k
//Technically yes, n + k is the actual number of operations.
//But in Big-O Notation, we ignore constants and lower-order terms.
//And Big-O(2n) is still O(n)

//Space Complexity = O(k)
