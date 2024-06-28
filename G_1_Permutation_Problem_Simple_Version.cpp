#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countSpecialPairs(const vector<int> &p) {
    int n = p.size();
    int ans = 0;
    unordered_map<int, vector<int>> value_indices;

    // Store indices for each value in the array
    for (int i = 0; i < n; ++i) {
        value_indices[p[i]].push_back(i + 1); // Use 1-based indexing
    }

    // Iterate through each value and their indices
    for (const auto &entry : value_indices) {
        const auto &indices = entry.second;
        int m = indices.size();
        for (int i = 0; i < m; ++i) {
            for (int j = i + 1; j < m; ++j) {
                int idx1 = indices[i];
                int idx2 = indices[j];
                if ((p[idx1 - 1] * p[idx2 - 1]) % (idx1 * idx2) == 0) {
                    ++ans;
                }
            }
        }
    }

    return ans;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        cout << countSpecialPairs(p) << endl;
    }
    return 0;
}
