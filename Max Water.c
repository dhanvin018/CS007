int findMin(int a, int b){
    if(a>b){return b;}
    return a;
}


int maxArea(int height[], int size){
    int l = 0;
    int r = size-1;
    int vol = 0;
    while(l != r){
        int temp = findMin(height[l], height[r])*(r-l);
        if(temp>vol){vol = temp;}
        if(height[l]< height[r]){l++;}
        else{r--;}
    }
    return vol;
}
