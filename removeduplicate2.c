int removeDuplicates(int* nums, int numsSize){
        
    
    int j = 0;        
    
    for(int i = 0; i<numsSize; ++i)
    {
        if(i<numsSize-2 && nums[i]==nums[i+1] && nums[i]==nums[i+2]) continue;
        else
            nums[j++] = nums[i];
    }
    return j;
        
    
}