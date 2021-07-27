int threeSumClosest(vector<int>& nums, int target) {
        
        int res = 0, aux = INT_MAX, n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++){
            int l = i+1, r = n-1;
            while(l < r){
                int sum = (nums[i]+nums[l]+nums[r]);
                if(aux > abs(target-sum)){ aux = abs(target-sum); res = sum; }
                if(sum < target)l++;
                else r--;
            }
        }
        
        return res;
    }