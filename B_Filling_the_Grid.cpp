// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
const int MOD = 1e9 + 7;
#define nl "\n"

// Function to perform modular exponentiation
long long modular_exponentiation(long long base, long long exponent,
                                 long long mod) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

void solution() {
    // write your code here
    int h, w;
    cin >> h >> w;
    vector<int> r(h), c(w);
    for (int i = 0; i < h; i++) {
        cin >> r[i];
    }
    for (int i = 0; i < w; i++) {
        cin >> c[i];
    }

    vector<vector<int>> v(h, vector<int>(w, 0));

    // Fill based on row constraints
    for (int i = 0; i < h; i++) {
        if (r[i] > w) {
            cout << "0" << endl;
            return;
        }
        for (int j = 0; j < r[i]; j++) {
            v[i][j] = 1;
        }
        if (r[i] < w) {
            v[i][r[i]] = -1;
        }
    }

    // Fill based on column constraints
    for (int j = 0; j < w; j++) {
        if (c[j] > h) {
            cout << "0" << endl;
            return;
        }
        for (int i = 0; i < c[j]; i++) {
            if (v[i][j] == -1) {
                cout << "0" << endl;
                return;
            }
            v[i][j] = 1;
        }
        if (c[j] < h) {
            if (v[c[j]][j] == 1) {
                cout << "0" << endl;
                return;
            }
            v[c[j]][j] = -1;
        }
    }

    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (v[i][j] == 0) {
                ans++;
            }
        }
    }

    long long result = modular_exponentiation(2, ans, MOD);
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}