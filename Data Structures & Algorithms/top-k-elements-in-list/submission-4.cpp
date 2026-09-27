class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> list;
        for(int n:nums)
        {
            list[n]++;
        } 
        vector<pair<int,int>> freq;
        for(const auto p: list)
        {
            freq.push_back(p);
        }
        int max;
        for(int i = 0; i < freq.size();++i)
        {
             max = i;
            for(int j = i+1; j<freq.size();++j)
            {
                if(freq[j].second>freq[max].second)
                {
                    max = j;
                }
            }
            swap(freq[i],freq[max]);
                
        }
    vector<int> result;
    for (int i = 0; i < k&&i<freq.size(); ++i) {
        result.push_back(freq[i].first);
    }

    return result;
        
    }
};
