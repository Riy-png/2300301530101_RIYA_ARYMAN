#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
int n=nums.size();
int current_sum=nums[0];
int max_sum=nums[0];
for(int i=0;i<n;i++){
    current_sum=max(current_sum,current_sum+nums[i]);
    max_sum=max(current_sum,max_sum);
}
  return max_sum;
}
