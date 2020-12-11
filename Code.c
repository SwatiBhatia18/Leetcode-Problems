bool validMountainArray(int* arr, int arrSize){
   
    int i;
    int flag=0;
    int c=0;
    int j;
    
    if(arrSize>=3)
    {
        for(i=0;i<arrSize-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                flag=1;
            }
            else
            {
                j=i;
                break;
            }
        }
        for(;j<arrSize-1;j++)
        {
            if(arr[j]>arr[j+1])
                c=1;
            else
                flag=0;
        }
        if(flag==1 && c==1)
            return true;
        else 
            return false;
        
    }
    else
        return false ;
    
    
    
    
    
    
}
