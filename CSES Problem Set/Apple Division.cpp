// Link : https://cses.fi/problemset/task/1623
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
    vector<ll> arr(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    ll ans = INT_MAX;
    for (ll i = 0; i < (1 << n); i++) {
        ll c = 0;
        for (ll j = 0; j < n; j++) {
            if (i & (1 << j))
                c += arr[j];
        }
        ans = min(ans, abs(sum - c - c));
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
