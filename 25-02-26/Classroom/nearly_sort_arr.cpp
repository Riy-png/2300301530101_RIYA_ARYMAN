int searchNearlySorted(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) return mid;
        if (mid-1 >= low && nums[mid-1] == target) return mid-1;
        if (mid+1 <= high && nums[mid+1] == target) return mid+1;

        if (nums[mid] < target)
            low = mid + 2;
        else
            high = mid - 2;
    }
    return -1;
}