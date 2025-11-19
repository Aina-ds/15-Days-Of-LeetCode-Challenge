class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths differ, they cannot be anagrams
        if (s.size() != t.size()) return false;
        
        // Frequency array for 26 lowercase letters
        int count[26] = {0};
        
        for (int i = 0; i < s.size(); ++i) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        // Check if all counts return to zero
        for (int i = 0; i < 26; ++i) {
            if (count[i] != 0) return false;
        }
        
        return true;
    }
};
