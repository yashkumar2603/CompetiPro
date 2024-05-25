// Link : https://cses.fi/problemset/task/1628
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
    vector<ll> v1, v2;
    unordered_map<int, int> mp;
    for (ll i = 0; i < n / 2; i++) {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for (ll i = n / 2; i < n; i++) {
        ll x;
        cin >> x;
        v2.push_back(x);
    }
    ll n1 = n / 2;
    ll n2 = n - n / 2;
    for (ll i = 0; i < (1 << n1); i++) {
        ll x = 0, y = 0, st = i;
        while (st > 0) {
            if (st & 1)
                x += v1[y];
            y++;
            st >>= 1;
        }
        mp[x]++;
    }
    ll ans = 0;
    for (ll i = 0; i < (1 << n2); i++) {
        ll x = 0, y = 0, st = i;
        while (st > 0) {
            if (st & 1)
                x += v2[y];
            y++;
            st >>= 1;
        }
        if (mp.count(k - x))
            ans += mp[k - x];
    }
    cout << ans;
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
