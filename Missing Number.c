int missingNumber(int* nums, int numsSize){
    int s=0;
    
    for(int i =0; i<numsSize; i++){
        
        s = s + *(nums+i);
        
    }

    s = (numsSize*(numsSize+1)/2) -s;
    
    return s;
}

