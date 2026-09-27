class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;
        sort(nums.begin(), nums.end()); // Required for two-pointer technique
        
        for(int i = 0; i < nums.size(); ++i) {
            // Skip duplicate values for i
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
            int target = -nums[i];
            int l = i + 1;
            int r = nums.size() - 1;
            
            while(l < r) {
                int sum = nums[l] + nums[r];
                if(sum < target) {
                    ++l;
                }
                else if(sum > target) {
                    --r;
                }
                else {
                    triplets.push_back({nums[i], nums[l], nums[r]});
                    ++l;
                    --r;
                    
                    // Skip duplicate values for l and r
                    while(l < r && nums[l] == nums[l-1]) ++l;
                    while(l < r && nums[r] == nums[r+1]) --r;
                }
            }
        }
        
        return triplets;
    }
};
