#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> prime_factors(int x) {
    vector<int> factors;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            factors.push_back(i);
            while (x % i == 0) {
                x /= i;
            }
        }
    }
    if (x > 1) {
        factors.push_back(x);
    }
    return factors;
}

bool is_bad_segment(const vector<int> &segment, const vector<int> &factors,
                    int x) {
    map<int, int> factor_count;
    for (const int &factor : factors) {
        factor_count[factor] = 0;
    }

    for (const int &num : segment) {
        int temp = num;
        for (const int &factor : factors) {
            while (temp % factor == 0) {
                temp /= factor;
                factor_count[factor]++;
            }
        }
    }

    int product = 1;
    for (const auto &entry : factor_count) {
        if (entry.second > 0) {
            for (int i = 0; i < entry.second; ++i) {
                if (product > x / entry.first) {
                    return true; // This is a bad segment
                }
                product *= entry.first;
            }
        }
    }
    return product != x;
}

int min_bad_segments(int n, int x, vector<int> &a) {
    vector<int> factors = prime_factors(x);
    vector<int> segment;
    int segments_count = 0;

    for (int i = 0; i < n; ++i) {
        segment.push_back(a[i]);
        if (is_bad_segment(segment, factors, x)) {
            segments_count++;
            segment.clear();
        }
    }

    if (!segment.empty()) {
        segments_count++;
    }

    return segments_count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << min_bad_segments(n, x, a) << endl;
    }
    return 0;
}
