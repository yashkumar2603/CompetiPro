#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        ll m[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> m[i];
        }

        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
            {
                f = f - min(m[i] * a, b);
            }
            if (i > 0)
            {
                f = f - min((m[i] - m[i - 1]) * a, b);
            }
        }
        if (f <= 0)
        {
            cout << "NO"
                 << "\n";
        }
        else
            cout << "YES"
                 << "\n";
    }

    return 0;
}