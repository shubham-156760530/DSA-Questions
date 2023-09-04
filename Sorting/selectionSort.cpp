vector<int> selectionSort(vector<int>&v){
    
    for (int i = 0; i < v.size(); i++){
        for (int j = i; j < v.size(); j++){
            if (v[j] < v[i]){
                swap(v[j], v[i]);
            }
        }
    }
    
    return v;
}
