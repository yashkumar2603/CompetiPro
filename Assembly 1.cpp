// Link :
// https://www.hackerrank.com/contests/goc-cdc-series-1/challenges/assembly-1
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
    vector<ll> e;
    vector<ll> o;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] & 1)
            e.push_back(a[i]);
        else
            o.push_back(a[i]);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    vector<ll> ans;
    ll ep = 0, op = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] & 1)
            ans.push_back(e[ep++]);
        else
            ans.push_back(o[op++]);
    }
    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << nl;
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
