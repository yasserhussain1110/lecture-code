#include<bits/stdc++.h>

using namespace std;

int binsearch(vector<int>& arr, int start, int end, int target) {
    int lo = start, hi = end;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] >= target) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    return arr[lo] == target ? lo : -1;
}


int find_pivot(vector<int>& arr, int target) {
    int n = arr.size();
    int lo = 0, hi = n - 1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] < arr[hi]) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    return lo;
}

int search(vector<int>& arr, int target) {
    int n = arr.size();
    int pivot = find_pivot(arr, target);
    if (target >= pivot && target <= arr[n - 1]) {
        return binsearch(arr, pivot, n - 1, target);
    } else {
        return binsearch(arr, 0, pivot - 1, target);
    }
}

int main() {
    vector<int> arr = {7, 9, 12, 3, 5};
    cout << search(arr, 9) << '\n';
    cout << search(arr, 10) << '\n';
    return 0;
}
