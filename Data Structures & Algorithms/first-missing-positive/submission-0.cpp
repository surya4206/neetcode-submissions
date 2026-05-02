class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n;) {
            if(nums[i] <= 0 || nums[i] > n) {i++; continue;}
            int index = nums[i] - 1;
            if(nums[index] != nums[i]) swap(nums[i], nums[index]);
            else i++;
        }
        for(int i = 0; i < n; i++) {
            if(nums[i] - 1 != i)
                return i + 1;
        }
        return n + 1;
    }
};