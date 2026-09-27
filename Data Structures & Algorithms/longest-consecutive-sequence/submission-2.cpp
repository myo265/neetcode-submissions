class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        int longest = 0;
        int streak = 0;
        unordered_set<int> num_set(nums.begin(),nums.end());
        for(int n: num_set)
        {
            if(num_set.find(n-1)==num_set.end())
            {
                streak = 1;
                while(num_set.find(++n)!=num_set.end())
                {
                    streak++;
                }
            }
            else
            {continue;}
            if(streak>longest)
            {
                longest = streak;
            }
        }
    return longest;
    }
};
