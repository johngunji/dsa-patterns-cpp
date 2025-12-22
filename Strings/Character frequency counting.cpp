
/*
Problem:
Given two strings s and t, determine if t is an anagram of s.

Approach:
Count frequency of each character using a fixed-size array.
Increment counts for s and decrement for t.
If all counts are zero, the strings are anagrams.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    vector<int> freq(26, 0);

    for (char c : s) freq[c - 'a']++;
    for (char c : t) freq[c - 'a']--;

    for (int count : freq) {
        if (count != 0) return false;
    }
    return true;
}
