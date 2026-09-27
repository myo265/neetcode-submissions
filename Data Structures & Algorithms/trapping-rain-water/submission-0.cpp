class Solution {
public:
    int trap(vector<int>& height) {
       vector<int>prefix_max;
       vector<int>postfix_max(height.size());
       int now_max = 0;
       int water = 0;
       for(int i = 0; i<height.size();i++)
       {
            if(height[i]>now_max)
            {
                now_max = height[i];
            }
            prefix_max.push_back(now_max);
       }
       now_max = 0;
       for(int j = height.size()-1; j >= 0;j--)
       {
            if(height[j]>now_max)
            {
                now_max = height[j];
            }
         postfix_max[j] = now_max;
       }
       for(int z = 0;z<height.size();z++)
       {
        water = water + (min(prefix_max[z],postfix_max[z])-height[z]);
       }
       return water;
    }
};
