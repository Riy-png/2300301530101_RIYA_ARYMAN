#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums,int k) {
    int n= nums.size();
    int j=0; 
    int Window_sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n-k;i++){
        Window_sum+=nums[i];
        max_sum=Window_sum;
    }
    for(int i=k;i<n;i++){
        Window_sum+=nums[i];
        Window_sum=Window_sum+nums[j];
        j++;
    }
}
int main(){
    vector<int> nums = {2,3,1,2,4,3};
     int k=3;
    cout << majorityElement(nums,k);
    return 0;
}




