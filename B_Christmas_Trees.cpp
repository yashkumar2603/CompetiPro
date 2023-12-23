
// TATTI QUESTION, SOME MINOR THING, DUE TO WHICH WRONG ANSWER.
// OR SEE SOME GOOD ALGO FOR THIS.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int a, m, l, r;
    cin >> a >> m >> l >> r;
    if (m == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    if (l == r)
    {
        cout << 0 << "\n";
        return 0;
    }
    if (m > (r - l))
    {
        if (a > l && a < r)
        {
            cout << 1 << endl;
            return 0;
        }
        else
        {
            cout << 0
        }
    }
    cout << abs(r - l) / m + 1 << endl;

    return 0;
}