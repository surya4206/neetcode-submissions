class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, curr = 0;
        while(curr <= r) {
            if(nums[curr] == 0) {
                swap(nums[l], nums[curr]);
                l++;
            }
            else if(nums[curr] == 2) {
                swap(nums[r], nums[curr]);
                r--;
                curr--;
            }
            curr++;
        }
    }
};