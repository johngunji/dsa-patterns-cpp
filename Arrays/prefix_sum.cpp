/*
problem :
Given an array of integers , answer multiple range sum  queries queries efficiently.

Approach:
precompute prefix sum array where prefix[i] stores the sum of elements from index 0 ton i.
  Range sum from l to r can be computed in O(1)

Time Complexity :
Preprocessing : O(n)
Each Query: O(1)

Space Complexity:O(n)
*/
#include <bits/stdc++.h>
using namespace std;

class PrefixSum {
   vector<int> prefix;

public:
   PrefixSum(vector<int>& nums){
           prefix.resize(nums.size());
           prefix[0]=nums[0];
          for(int i=1;i<nums.size();i++){
              prefix[i]=prefix[i-1]+nums[i];
          }
   }

  int rangesum(int l ,int r){
    if(l==0) return prefix[r];
   return prefix[r] - prefix[l-1];
  }
};

