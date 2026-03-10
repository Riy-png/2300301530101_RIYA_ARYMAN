#include <bits/stdc++.h>
using namespace std;

int  maxGoodSubarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    int left = 0;
    int  sum = 0, max_sum = 0; 
    unordered_map<int,int>freq;

    for (int right = 0; right < n; right++) {
        sum = sum+arr[right];
         freq[arr[right]]++;

    
       while(freq.size()<k){
          freq[arr[left]]--;
        if(arr[left]==0)
             freq.erase(arr[left]);
        sum=sum-arr[left];
        left++;    

       }
        max_sum = max(max_sum, sum);
    }

    return max_sum;
}
int main(){
    vector<int>arr={3,1,-1,-2,-3};
    int k=2;
    cout<<maxGoodSubarraySum(arr,k);
    return  0;
}

