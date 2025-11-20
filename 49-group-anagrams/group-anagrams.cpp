#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map from sorted string to list of anagrams
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;          // copy original string
            sort(key.begin(), key.end()); // sort characters to form key
            mp[key].push_back(s);   // group original string under this key
        }

        // Collect all grouped anagrams into result
        vector<vector<string>> result;
        for (auto &it : mp) {
            result.push_back(it.second);
        }
        return result;
    }
};
