class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> seen = new HashSet<>();
        for(int i : nums)
        {
            if(!seen.contains(i))
            {
                seen.add(i);
            }
            else
            {
                return true;
            }
        }
        return false;
    } 
}