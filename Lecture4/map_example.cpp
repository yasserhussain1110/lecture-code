#include<bits/stdc++.h>

using namespace std;

void freq(vector<int>& arr) {
    int n = arr.size();
    map<int, int> mp1;
    unordered_map<int, int> mp2;
    for (int i = 0; i < n; i++) {
        mp1[arr[i]]++;
        mp2[arr[i]]++;
    }
    for (auto [x, y] : mp1) {
        cout << x << " " << y << '\n';
    }
    for (auto [x, y] : mp2) {
        cout << x << " " << y << '\n';
    }
}

int main() {
    vector<int> arr = {7, 9, 12, 3, 5, 9, 1, 7, 2, 12};
    freq(arr);
    return 0;
}
