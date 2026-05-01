class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ind;
        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if(!ind.contains(diff))
                ind[nums[i]] = i;
            else {
                int val = ind[diff];
                return (i < val) ? vector<int>{i, val} : vector<int>{val, i};
            }
        }
        return {0, 0};
    }
};
