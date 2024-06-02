// Link : https://atcoder.jp/contests/abc355/tasks/abc355_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n, t;
    cin >> n >> t;
    vector<int> a(t);
    vector<int> row(n, 0), col(n, 0);
    int d1 = 0, d2 = 0;
    int ans = -1;
    for (int i = 0; i < t; i++) {
        cin >> a[i];
        int r = (a[i] - 1) / n;
        int c = (a[i] - 1) % n;
        row[r] += 1;
        col[c] += 1;
        if (r == c)
            d1++;
        if (r + c == n - 1)
            d2++;
        if (row[r] == n || col[c] == n || d1 == n || d2 == n) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << nl;
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
