#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5} , t=6;
    int n = 5;

    int l = 0, r = n - 1;

    while (l < r) {
        int sum = arr[l] + arr[r];

        if (sum == 6) {
            cout << "Pair Found: " << arr[l] << " , " << arr[r] << endl;
            break;
        }
        else if (sum < 6)
            l++;
        else
            r--;
    }

    return 0;
}
