class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size(), low = 0, high = n - 1, mid, ans = nums[0];
        while(low <= high) {
            mid = (low + high) / 2;
            if(nums[low] < nums[high])
                return min(ans, nums[low]);
            ans = min(ans, nums[mid]);
            if(nums[mid] >= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return ans;
    }
};
