class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;
        int left = 0;
        int right = heights.size() - 1;
        while(left<right)
        {
            int area_temp = 0;
            if(heights[left]>heights[right])
            {
                area_temp = heights[right]*(right-left);
                right--;
            }
            else
            {
                area_temp = heights[left]*(right-left);
                left++;
            }
            if(area_temp>max_area)
            {
                max_area = area_temp;
            }
        }
        return max_area;
    }
};
