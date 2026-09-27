class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> answer;
        for(int num: nums)
        {
            if(answer.count(num))
            {return true;}
            else
            answer.insert(num);
        }
    return false;
    }
};