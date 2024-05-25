// Link : https://codeforces.com/problemset/problem/337/A
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
    vector<int> p(m);
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int ans = INT_MAX;
    for (int i = 0; i <= m - n; i++) {
        ans = min(ans, p[i + n - 1] - p[i]);
    }
    if (ans != INT_MAX)
        cout << ans << nl;
    else
        cout << "0" << nl;
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
