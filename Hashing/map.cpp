/*
Problem:
Given an array of integers, count the frequency of each element.

Approach:
Use an unordered_map to store elements as keys and their counts as values.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> buildFrequencyMap(vector<int>& nums) {
    unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }
    return freq;
}
