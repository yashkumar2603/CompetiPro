// Link : https://atcoder.jp/contests/abc340/tasks/abc340_d
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// GRAPHS IS THE WAY TO DO.

int func(ll n, vector<ll> &a, vector<ll> &b, vector<ll> &c, ll level)
{
    if (level == n)
    {
        return 0;
    }
    if (level <= n - 1)
        return min(a[level - 1] + func(n, a, b, c, level + 1), b[level - 1] + func(n, a, b, c, c[level - 1]));
}

void solution()
{
    // write your code here
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> x(n);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i] >> b[i] >> x[i];
    }
    cout << func(n, a, b, x, 1) << nl;
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