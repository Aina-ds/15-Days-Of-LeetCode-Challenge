class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;
        int n = nums.size();
        
        if (n < 3) return triplets;  

       
        sort(nums.begin(), nums.end());

        
        for (int first = 0; first < n - 2; ++first) {
           
            if (first > 0 && nums[first] == nums[first - 1]) {
                continue;
            }

            int second = first + 1;
            int third = n - 1;

            while (second < third) {
                int sum = nums[first] + nums[second] + nums[third];

                if (sum == 0) {
                    
                    triplets.push_back({nums[first], nums[second], nums[third]});

                    ++second;
                    --third;

                    while (second < third && nums[second] == nums[second - 1]) {
                        ++second;
                    }

                    while (second < third && nums[third] == nums[third + 1]) {
                        --third;
                    }

                } else if (sum < 0) {
                    ++second;
                } else {
                    --third;
                }
            }
        }

        return triplets;
    }
};
