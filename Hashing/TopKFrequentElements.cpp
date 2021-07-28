bool static comp(const pair<int, int>&a, const pair<int, int>&b){
        return a.second > b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        
        for(int i = 0; i < nums.size(); i++)
            umap[nums[i]] = 0;
        for(int i = 0; i < nums.size(); i++)
            umap[nums[i]]++;
        
        vector<pair<int, int>> vp;
        
        for(auto &it : umap){ vp.push_back(make_pair(it.first, it.second)); }
        
        sort(vp.begin(), vp.end(), comp);
        
        vector<int> res;
        
        for(int i = 0; i < k; i++){
            res.push_back(vp[i].first);
        }
        
        return res;
    }