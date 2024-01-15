// TLE on 5th CASE.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    for (ll j = 0; j < t; j++)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < q; i++)
        {
            ll s, d, k;
            cin >> s >> d >> k;

            ll sum = 0;
            for (ll z = 0; z < k; z++)
            {
                sum += a[s - 1 + d * z] * (z + 1);
            }
            cout << sum << " ";
        }
        cout << "\n";
    }

    return 0;
}