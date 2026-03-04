vector<int> leaders(vector<int>& nums) {
    vector<int> ans;
    int maxRight = INT_MIN;

    for (int i = nums.size()-1; i >= 0; i--) {
        if (nums[i] > maxRight) {
            ans.push_back(nums[i]);
            maxRight = nums[i];
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}