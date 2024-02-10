// Link : https://atcoder.jp/contests/abc340/tasks/abc340_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

// the big number shows, that recursive solutions are prolly not allowed, as they will take a loot of time, so going to something using arrays.
// will somehow be solved thru the pattern, in a single math equation, recognise the pattern

/*ll rec(int n, ll cost)
{
    double a, b;
    if (n >= 2)
    {
        a = floor(n / 2);
        b = ceil(n / 2);
        cost += n;
        if (a >= 2)
        {
            cost += a;
            rec(a, cost);
        }
        if (b >= 2)
        {
            cost += b;
            rec(b, cost);
        }
    }
    return cost;
}*/

void solution()
{
    // write your code here
    ll x;
    cin >> x;
    ll cost = 0;
    if (x < 2)
    {
        cout << 0 << nl;
        return;
    }

    cout << cost << nl;
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
