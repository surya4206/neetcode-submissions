class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uni;
        for(int i : nums) {
            if(uni.find(i) != uni.end())
                return true;
            uni.insert(i);
        }
        return false;
    }
};