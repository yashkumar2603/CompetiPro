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
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> a(n);
    // ll mi = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        a[i]--;
        a[max(0ll, (i - v[i]))]++;
    }
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] == 0)
            ++cnt;
    cout << cnt << nl;
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