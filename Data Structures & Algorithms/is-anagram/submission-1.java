class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length())
        {
            return false;
        }
        HashMap<Character, Integer> counts = new HashMap<>();
        for(Character letter : s.toCharArray())
        {
            counts.put(letter, counts.getOrDefault(letter, 0) + 1);
        }
        for(Character letter : t.toCharArray())
        {
            counts.put(letter, counts.getOrDefault(letter, 0) - 1);
            if(counts.get(letter)<0)
            {
                return false;
            }
        }
        return true;
    }
}
