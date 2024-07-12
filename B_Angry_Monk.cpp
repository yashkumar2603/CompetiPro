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
    // remove existing 1s
    // break into 1s
    // then merge to form the full
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    ll count = 0;
    for (ll i = 0; i < k; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < k - 1; i++) {
        if (a[i] == 1)
            ans += 1;
        else
            ans += ((2 * a[i]) - 1);
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