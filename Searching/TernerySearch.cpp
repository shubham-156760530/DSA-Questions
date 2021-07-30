int ternarySearch(int arr[], int N, int K) 
    { 
        int l = 0, r = (N - 1);
        while(l <= r){
            int mid1 = l+(r-l)/3;
            int mid2 = r-(r-l)/3;
            
            if(arr[mid1] == K)
                return 1;
            else if(arr[mid2] == K)
                return 1;
            else if(arr[mid1] > K)
                r = mid1 - 1;
            else if(arr[mid2] < K)
                l = mid2 + 1;
            else {
                l = mid1 + 1; 
                r = mid2 - 1; 
            }
        }
        
        return -1;
       // Your code here
       
    }