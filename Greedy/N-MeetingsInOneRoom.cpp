bool static myCmp(const pair<int, int>&a, const pair<int, int>&b){
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> meet;
        
        for(int i = 0; i < n; i++)
            meet.push_back(make_pair(start[i], end[i]));
        
        sort(meet.begin(), meet.end(), myCmp);
        
        int numOfMeet = 1;
        for(int i = 1, j = 0; i < n; i++){
            if(meet[j].second >= meet[i].first){ continue; }
            else{ numOfMeet++; j = i; }
        }
        
        return numOfMeet;
        // Your code here
    }