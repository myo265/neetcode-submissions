class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int remainder = 0;
        unordered_map<int, int> list;
        for(int i=0; i<nums.size();i++)
        {
            remainder = target - nums[i];
            if (list.find(remainder) != list.end())
            {
                return {list[remainder],i};
            }
            list.insert({nums[i],i});
        }  
        return {};
    }
};
