// Link : https://codeforces.com/problemset/problem/459/B
#include <bits/stdc++.h>
#include <climits>
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
    vector<ll> b(n);
    unordered_map<ll, ll> mp;
    ll mi = LONG_LONG_MAX, ma = LONG_LONG_MIN;
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
        mp[b[i]]++;
        mi = min(mi, b[i]);
        ma = max(ma, b[i]);
    }
    ll w;
    if (ma - mi == 0)
        w = n * (n - 1) / 2;
    else
        w = mp[ma] * mp[mi];
    cout << ma - mi << " " << w << nl;
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
