#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll m, n, x;
    ll cn = 0, ans = 0;
    cin >> m >> n >> x;
    ll i = m % x;
    ll j = n % x;
    ans = (i + j) / x;
    if (ans >= 1)
        cn = x - max(i, j);
    ans += (m / x + n / x);
    cout << ans << " " << cn << endl;

    return 0;
}