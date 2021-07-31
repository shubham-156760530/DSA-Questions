bool static mycmp(pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int, int>> task;
        
        for(int i = 0; i < n; i++)
            task.push_back(make_pair(start[i], end[i]));
        
        sort(task.begin(), task.end(), mycmp);
        
        int i = 1, j = 0;
        int cnt = 1;
        
        for(i = 1; i < n; i++){
            if(task[j].second >= task[i].first){ continue; }
            else { cnt++; j = i; }
        }
        
        return cnt;
        // Your code here
    }