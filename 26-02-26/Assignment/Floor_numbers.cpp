int floorElement(vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x) {
            ans = arr[mid];
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    return ans;
}