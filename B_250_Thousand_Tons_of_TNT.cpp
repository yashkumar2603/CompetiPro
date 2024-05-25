// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // we cant do sorting.
    ll ans = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            ll int mi = LONG_LONG_MAX;
            ll int ma = LONG_LONG_MIN;
            ll int sum;
            // cout << i << nl;
            for (int j = 0; j < n; j += i) {
                sum = accumulate(a.begin() + j, a.begin() + j + i, 0ll);
                mi = min(mi, sum);
                ma = max(ma, sum);
            }
            ans = max(ans, ma - mi);
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}