#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSumIndices(vector<int>& arr, int target) {
        unordered_map<int, int> mp;  // Map to store element -> index
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int complement = target - arr[i];
            // If complement found, return indices
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            // Store current element and index
            mp[arr[i]] = i;
        }
        return {-1, -1};  // No pair found
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    cout << sol.twoSumExists(arr, target) << "\n";
    vector<int> res = sol.twoSumIndices(arr, target);
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    return 0;
}
