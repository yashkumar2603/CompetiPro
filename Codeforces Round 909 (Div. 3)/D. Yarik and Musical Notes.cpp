// Link : https://codeforces.com/contest/1899/problem/D
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
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    unordered_map<ll, ll> mp;
    for (auto e : a) {
        ans += mp[e];
        mp[e]++;
        if (e == 1)
            ans += mp[2];
        if (e == 2)
            ans += mp[1];
    }
    cout << ans << nl;
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
