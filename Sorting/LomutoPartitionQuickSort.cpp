// In lomuto partition, we always consider last element as pivot element and we return the correct place or index for pivot element.

int lomuto(vector<int>&v, int l, int h){
    
    int p = v[h], i = l-1, j = l;
    for (j = l; j < h; j++){
        if (v[j] <= p){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1], v[h]);
    return (i+1);
}

static void quickSort(vector<int>&v, int l, int h){
    if(l < h){
        int p = lomuto(v, l, h);
        quickSort(v, l, p-1);
        quickSort(v, p+1, h);
    }
    return;
}
