#include <bits/stdc++.h>
using namespace std;        
int PrefixSum(vector<int>& arr) {
    int l,r,x,y;
    cin>>l>>r;
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];

    for (int i = 1; i < arr.size(); i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    for(int i=0;i<r-l+1;i++){
        arr[i]=x+(i+1)*y;
    }
    for(int i=1;i<=arr.size();i++){
        total_sum=prefix[x]+arr[i];

    }
    return (total_sum) % (10^9+7);
}        