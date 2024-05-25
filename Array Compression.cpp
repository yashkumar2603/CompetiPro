// Link :
// https://www.hackerrank.com/contests/goc-cdc-series-25/challenges/array-compression-1
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    ll n, k;
    cin >> n >> k;
    // since the length of the array is huge, dont store it and apply the
    // operation as we take the input.
    ll prod = 1, ans = 0;

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (prod * x > k) {
            prod = x;
            ans++;
        } else
            prod *= x;
    }
    cout << ans + 1 << nl;
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
