#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n); // forging cost
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b(n); // melting return
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    vector<long long> c(m); // available ingots
    for (int i = 0; i < m; ++i) {
        cin >> c[i];
    }

    long long total_experience = 0;

    // Calculate maximum experience from forging
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
            long long weapons_forged = c[i] / a[i];
            total_experience += weapons_forged;
        }
    }

    // Calculate maximum experience from melting
    for (int i = 0; i < n; ++i) {
        if (b[i] < a[i]) {
            long long weapons_to_melt = 0;
            for (int j = 0; j < m; ++j) {
                if (a[i] > 0 && c[j] >= a[i]) {
                    long long weapons_melted = c[j] / a[i];
                    weapons_to_melt += weapons_melted;
                }
            }

            total_experience += weapons_to_melt;

            // Update ingots after melting
            for (int j = 0; j < m; ++j) {
                c[j] += weapons_to_melt * b[i];
            }
        }
    }

    cout << total_experience << endl;

    return 0;
}
