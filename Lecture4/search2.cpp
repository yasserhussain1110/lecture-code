#include<bits/stdc++.h>

using namespace std;

int search(vector<int>& arr, int target) {
    int n = arr.size();
    int lo = 0, hi = n - 1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] > arr[lo]) {
            if (target >= arr[lo] && target <= arr[mid]) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        } else {
            if (target >= arr[mid + 1] && target <= arr[hi]) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
    }
    return arr[lo] == target ? lo : -1;
}

int main() {
    vector<int> arr = {7, 9, 12, 3, 5};
    cout << search(arr, 9) << '\n';
    cout << search(arr, 10) << '\n';
    return 0;
}
