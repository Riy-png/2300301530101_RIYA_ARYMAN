int findOddElement(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        // Make mid even
        if (mid % 2 == 1)
            mid--;

        if (nums[mid] == nums[mid + 1]) {
            low = mid + 2;   // move right
        } else {
            high = mid;      // move left
        }
    }

    return nums[low];
}