class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;
        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if(index.contains(diff)) {
                if(index[diff] > i)
                    return {i, index[diff]};
                else
                    return {index[diff], i};
            }
            index[nums[i]] = i;
        }
        return {-1, -1};
    }
};
