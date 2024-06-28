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
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    ll total = 0;
    ll mi = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
        mi = min(mi, v[i]);
    }
    if (total < s) {
        cout << "-1" << nl;
        return;
    }
    for (ll i = 0; i < n; i++) {
        s -= (v[i] - mi);
    }
    if (s <= 0) {
        cout << mi << nl;
        return;
    } else
        cout << (mi - (s + n - 1) / n) << nl;
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