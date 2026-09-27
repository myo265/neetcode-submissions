class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> inputs = new HashMap<>();
        int firstindex = 0;
        int secondindex = 0;
        int needed = 0;
        for(int i = 0; i<nums.length; i++)
        {
            needed = target - nums[i];
            if(inputs.containsKey(needed))
            {
                firstindex = inputs.get(needed);
                secondindex = i;
                break;
            }
            inputs.put(nums[i], i);
        }
        return new int[] {firstindex, secondindex};
    }
}
