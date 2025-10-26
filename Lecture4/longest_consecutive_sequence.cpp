#include<bits/stdc++.h>

using namespace std;

int longest_consecutive(vector<int>& arr) {
    unordered_set<int> st;
    for (auto x : arr) st.insert(x);
    int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (st.find(arr[i] - 1) == st.end()) {
            int num = arr[i];
            int count = 0;
            while (st.find(num) != st.end()) {
                st.erase(num);
                count++;
                num++;
            }
            ans = max(ans, count);
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {7, 9, 12, 3, 5, 9, 1, 7, 2, 12, 4};
    cout << longest_consecutive(arr) << '\n';
    return 0;
}
