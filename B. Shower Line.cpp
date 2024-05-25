// Link : https://codeforces.com/problemset/problem/431/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n = 5;
    int g[5][5];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> g[i][j];
    int p[6], pans[6], ans = -1, tmp;
    for (int i = 0; i < n; ++i)
        p[i] = i;

    do {
        // 01234
        tmp = g[p[0]][p[1]] + g[p[1]][p[0]];
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];

        // 1234
        tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];

        // 234
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];

        // 34
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];

        if (tmp > ans) {
            ans = tmp;
            for (int i = 0; i < n; ++i)
                pans[i] = p[i];
        }
    } while (next_permutation(p, p + n));

    cout << ans << "\n";
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
