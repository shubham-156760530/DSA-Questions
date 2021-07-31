int solve(vector<int> &nums, int k) {
        int i,j;
        i = j = 0;
        int ans = 0;
        unordered_map<int,int> mp;
        while(i<=j && j<nums.size()) {
            mp[nums[j]]++;
            while(mp.size()>k) {
                mp[nums[i]]--;
                if(mp[nums[i]]==0) {
                    mp.erase(nums[i]);
                }
                i++;
            }
            ans += (j-i);
            j++;
        }
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k) - solve(nums,k-1);
    }