/*
Problem:
Given an array of integers and a target value, find indices of two numbers
such that they add up to the target.
Approach:
Use a hash map to store previously seen values and their indices.
For each element, check if (target - current) exists in the map.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int need = target-nums[i];
        if (mp.find(need) != mp.end()) {
            return {mp[need], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}
