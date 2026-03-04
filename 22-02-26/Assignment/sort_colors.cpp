class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=0;
        for(int i=0;i<nums.size();i++){
              if(nums[low]>=nums[mid]){
                swap(nums[low],nums[mid]);
                low++;
             } else if{
                  mid++;
             }else(nums[high]>=nums[mid]){
                swap(nums[high],nums[mid]);
                high++;
             }
       }
    }   
};