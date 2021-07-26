    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        
        int maxCount = 0;
        int count = 0;
        int start = 0;
        int end = 0;
        
        for(; end < s.length(); end++) {
            if(map.find(s[end]) == map.end()) {
                count++;
            } 
            
            else {
                if(map[s[end]] < start) {
                    count++;
                }   else {
                    start = map[s[end]] + 1;
                    count = (end - start) + 1;
                }
            }
            map[s[end]] = end;
            maxCount = max(count, maxCount);
        }
        
        return maxCount;
    }