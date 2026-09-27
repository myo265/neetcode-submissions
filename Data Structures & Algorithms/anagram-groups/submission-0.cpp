class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> line;

        for(int i = 0; i < strs.size() ; i++)
        {
            vector<int> count(26, 0);
            for(char c: strs[i])
            {
                int element = c - 'a';
                count[element]++;
            }
            string repeat = to_string(count[0]);
            for(int i = 0; i < 26; i++)
            {
                repeat = repeat + "," + to_string(count[i]);
            }
            line[repeat].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for (const auto& pair : line) {
            result.push_back(pair.second);
        }
        return result;
    }
};
