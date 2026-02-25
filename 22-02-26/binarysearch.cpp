#include <bits/stdc++.h>
using namespace std;
int main(){
int low=0;
int arr[]={1,2,3,4,4,4,4,5,6};
int n = sizeof(arr) / sizeof(arr[0]);
int high= n-1 ,  last=-1, target=5;
while(low<=high){
    int mid=low+(high-low)/2;
        if(arr[mid]==target){
            last=mid;
            low=mid+1;
           
        }else if(arr[mid]<target){
             low=mid+1;
        }else{
            high=mid-1;
           
        }
    
         
    }  

    if (last != -1)
        cout << "Last occurrence at index: " << last << endl;
    else
        cout << "Element not found" << endl;

    return 0;
      
       

}
