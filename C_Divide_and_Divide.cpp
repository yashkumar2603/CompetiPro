// Link : https://atcoder.jp/contests/abc340/tasks/abc340_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

map<ll, ll> dp; // stores the money needed for n to be broken down.
ll solve(const ll n)
{
    if (n == 1)
        return 0;
    if (dp.count(n))
        return dp[n];
    const ll flr = n / 2, clr = (n + 1) / 2;
    return dp[n] = n + solve(flr) + solve(clr); // final money=>money in this step plus money in the 2 numbers formed.
}

void solution()
{
    // write your code here
    ll x;
    cin >> x;
    if (x < 2)
    {
        cout << 0 << nl;
        return;
    }
    cout << solve(x) << nl;
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
