#include<bits/stdc++.h>
using namespace std;
//bruteforce approach

int getLongestSubarray(vector<int>& a, long long k){
  int n = a.size(); // size of the array
  int len=0;
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      long long sum=0;
      for(int m=i; m<=j; m++){
        sum = sum+a[m];
      }
      if(sum == k)
        len = max(len, j-i+1);
    }
  }
return len;
}//Time complexity is O(N3), Space complexity is O(1)

int getLongestSubarray(vector<int>& a, long long k){
  int n = a.size(); // size of the array
  int len=0;
  for(int i=0; i<n; i++){
    long long sum=0;
    for(int j=i; j<n; j++){
        sum = sum+a[j];
      
      if(sum == k)
        len = max(len, j-i+1);
    }
  }
return len;
}//Time complexity is O(N2), Space complexity is O(1)

int getLongestSubarray(vector<int>& a, long long k){
map<long, long> preSumMap;
long long sum=0;
int maxLen=0;
for(int i=0;i<a.size();i++){
  sum += a[i];
  if(sum == k){
    maxLen = max(maxLen, i+1);
  }
  int rem = sum - k;
  if( preSumMap.find(rem) != preSumMap.end()){
    int len = i-preSumMap[rem];
    maxLen = max(maxLen, len);
  }
  preSumMap[sum] = 1;
}
  return maxLen;
}

int main(){
  vector<int> a = { 2, 3, 5, 1, 9};
  long long k = 10;
  int len = getLongestSubarray(a, k);
  cout<<"The length of the longest subarray is: "<<len<<"\n";
return 0;
}
