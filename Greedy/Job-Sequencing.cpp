bool static myCmp(const Job &a, const Job &b){
        return (a.profit > b.profit);
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr+n, myCmp);
        vector<int> ans;
        
        int maxd = INT_MIN;
        for(int i = 0; i < n; i++){
            maxd = max(maxd, arr[i].dead);
        }
        
        for(int i = 0; i < maxd; i++)ans.push_back(-1);
        
        for(int i = 0; i < n; i++){
            for(int j = (arr[i].dead-1); j >= 0; j--){
                if(ans[j] == -1){ ans[j] = arr[i].profit; break; }
            }
        }
        
        vector<int> res;
        int profit = 0, count = 0;
        
        for(int i = 0; i < maxd; i++){
            if(ans[i] != -1){
                profit += ans[i];
                count++;
            }
        }
        
        res.push_back(count);
        res.push_back(profit);
        
        return res;
        // your code here
    } 