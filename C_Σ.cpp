// Link : https://atcoder.jp/contests/abc346/tasks/abc346_c
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
    ll n, k;
    cin >> n >> k;
    ll sum = k * (k + 1) / 2 + 0ll;
    ll in;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> in;
        s.insert(in);
    }
    for (auto &i : s)
    {
        if (i <= k)
            sum -= i;
    }
    cout << sum << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}