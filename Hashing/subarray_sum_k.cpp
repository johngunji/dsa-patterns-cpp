/*
Problem:
Given an array of integers and an integer k, find the total number of
continuous subarrays whose sum equals k.

Approach:
Use prefix sum with hashing.
Store the count of each prefix sum encountered.
For each current prefix sum, check how many times (currentSum - k)
has appeared before.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;  

    int prefixSum = 0;
    int count = 0;

    for (int num : nums) {
        prefixSum += num;
        if (mp.find(prefixSum - k) != mp.end()) {
            count += mp[prefixSum - k];
        }
        mp[prefixSum]++;
    }
    return count;
}
