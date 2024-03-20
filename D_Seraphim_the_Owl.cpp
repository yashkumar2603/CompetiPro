// Link : https://codeforces.com/contest/1945/problem/D
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// REVISIT, NOT MY CODE.

void solution()
{
    // write your code here
    ll n, m;
    cin >> n >> m;
    ll a[n];
    ll b[n];
    ll c[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[i] = min(a[i], b[i]);
    }
    ll s[n];
    for (ll i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
            s[i] = c[i];
        else
            s[i] = s[i + 1] + c[i];
    }

    ll ans = 1e18;
    for (int i = 0; i < m; i++) // DIDNT UNDERSTAND THE LOGIC HERE.
    {
        ll sum = a[i];
        if (i + 1 < n)
            sum += s[i + 1];
        ans = min(ans, sum);
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}