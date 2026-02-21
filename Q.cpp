#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int prefix[n]
   


    prefix[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int L, R;
    cout << "Enter L and R: ";
    cin >> L >> R;

    int sum;

    if(L > 0) {
        sum = prefix[R] - prefix[L - 1];
    } else {
        sum = prefix[R];
    }

    cout << "Range Sum = " << sum << endl;

    return 0;
}

