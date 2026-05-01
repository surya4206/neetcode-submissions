class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int freq[2][26] = {0};
        for(char i : s)
            freq[0][i - 'a']++;
        for(char i : t)
            freq[1][i - 'a']++;
        for(int i = 0; i < 26; i++)
            if(freq[0][i] != freq[1][i])
                return false;
        return true;
    }
};
