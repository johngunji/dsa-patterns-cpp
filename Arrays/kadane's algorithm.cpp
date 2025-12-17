/*
Problem:
Given an integer array, find the contiguous subarray with the largest sum.

Approach:
Use Kadane’s algorithm.
Maintain a running sum. At each step, decide whether to extend the
current subarray or start a new one from the current element.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}
