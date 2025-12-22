/*
Problem:
Given a string, find the length of the longest substring
without repeating characters.

Approach:
Use sliding window with two pointers.
Maintain a hash set to track characters in the current window.
Expand the right pointer; if a duplicate is found, shrink the window
from the left until the duplicate is removed.

Time Complexity: O(n)
Space Complexity: O(min(n, charset))
*/

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        while (st.count(s[right])) {
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
