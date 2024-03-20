// Link : https://codeforces.com/contest/1945/problem/B
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
    ll a, b, m;
    cin >> a >> b >> m;
    if (m == 0)
    {
        cout << 0 << nl;
        return;
    }
    ll x = lcm(a, b);
    ll va = m / a + 1;
    ll vb = m / b + 1;
    cout << va + vb << nl;
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