// Link : https://atcoder.jp/contests/abc339/tasks/abc339_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution()
{
    // write your code here
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // it cant go negative at any step.
    // find prefix sum
    ll sum = 0;
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        m = min(m, sum);
    }
    cout << sum - m << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}