// Link : https://codeforces.com/problemset/problem/486/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n, m;
    cin >> m >> n;
    bool B[m][n], A[m][n], C[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
            A[i][j] = 1;
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (B[i][j] == 0) {
                for (int k = 0; k < n; ++k) {
                    A[i][k] = 0;
                }
                for (int k = 0; k < m; ++k) {
                    A[k][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j]) {
                for (int k = 0; k < n; ++k) {
                    C[i][k] = 1;
                }
                for (int k = 0; k < m; ++k) {
                    C[k][j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (C[i][j] != B[i][j]) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
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
