// Link :
// https://www.hackerrank.com/contests/goc-cdc-series-1/challenges/frog-in-the-pond
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll q;
    cin >> q;
    while (q--) {
        ll t;
        cin >> t;
        ll l = 0, r = 0; // starting
        ll res = 0;      // ans
        while (r < t - 1) {
            ll farthest = 0;
            for (ll i = l; i <= r; i++) {
                farthest = max(farthest, a[i] + i);
            }
            l = r + 1;
            r = farthest;
            res++;
        }
        cout << res << nl;
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
