class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            curSum = max(nums[i], curSum + nums[i]);  // extend or restart
            maxSum = max(maxSum, curSum);            // best so far
        }

        return maxSum;
    }
};
