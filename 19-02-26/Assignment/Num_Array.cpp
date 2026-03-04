#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = malloc(2 * sizeof(int)); 
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                result[0] = i;   // store first index
                result[1] = j;   // store second index
                *returnSize = 2; // size of answer array
                return result;
                
            }
        }
    }
    *returnSize = 0; 
    return NULL;
}
```