int divide(int dividend, int divisor) {

    // Edge case (overflow)
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    long long dvd = abs((long long)dividend);
    long long dvs = abs((long long)divisor);

    long long low = 0, high = dvd;
    long long ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * dvs <= dvd) {
            ans = mid;           // possible answer
            low = mid + 1;       // try bigger
        } else {
            high = mid - 1;      // try smaller
        }
    }

    // Sign handling
    if ((dividend < 0) ^ (divisor < 0))
        ans = -ans;

    return (int)ans;
}