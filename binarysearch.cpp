#include<bits/stdc++.h>
using namespace std;
int main(){
    int low=0;
    int arr[]={5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int high = n-1, mid,target=6,ans=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==target){
             ans=mid;
             break;
            if(arr[low]<=arr[mid]){
                 if(arr[low]<=target && target< arr[mid]){
                     low=mid+1;
                 }else{
                    high=mid-1;
                }
            }
            if(arr[mid]<target&& target<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }

        }    
       
    }
    return -1;
}