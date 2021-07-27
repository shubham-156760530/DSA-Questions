vector<vector<int> > fourSum(vector<int> &arr, int target) {
        vector<vector<int>> res;
        
        if(arr.size() < 4)return res;
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n; i++)
        {
            for(int j = (i+1); j < n; j++)
            {
                int k = j+1, l = n-1;
                while(k < l)
                {
                    int sum = arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum == target)
                    {
                        vector<int> v;
                        v.push_back(arr[i]);v.push_back(arr[j]);
                        v.push_back(arr[k]);v.push_back(arr[l]);
                        res.push_back(v);
                        while(k < l and arr[k] == v[2])k++;
                        while(k < l and arr[l] == v[3])l--;
                    }
                    
                    else if(sum < target)k++;
                    else l--;
                }
                while(j+1 < n and arr[j+1] == arr[j])++j;
            }
            while(i+1 < n and arr[i+1] == arr[i])++i;
        }
        
        return res;
        // Your code goes here
    }