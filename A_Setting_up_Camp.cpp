// Link : https://codeforces.com/contest/1945/problem/A
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
    ll a, b, c;
    cin >> a >> b >> c;

    ll x = b % 3;

    if (x + c >= 3 || x == 0)
    {
        cout << a + (ll)ceil((b + c) / 3.0) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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