// Link : https://codeforces.com/problemset/problem/445/A
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
    cin >> n >> m;
    vector<string> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0 && b[i][j] == '.')
                cout << "B";
            else if ((i + j) % 2 != 0 && b[i][j] == '.')
                cout << "W";
            else
                cout << "-";
        }
        cout << nl;
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
