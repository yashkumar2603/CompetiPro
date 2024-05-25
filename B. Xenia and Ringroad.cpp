// Link : https://codeforces.com/problemset/problem/339/B
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
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    ll ans = 0;
    int curr = 1;
    for (int i = 0; i < m; i++) {
        if (a[i] >= curr) {
            ans += a[i] - curr;
            curr = a[i];
        } else {
            ans += n - curr + a[i];
            curr = a[i];
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
