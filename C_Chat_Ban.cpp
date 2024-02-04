#include <bits/stdc++.h>

#define pb push_back
typedef long long int ll;
typedef long double ld;
using namespace std;
ll M = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll k, x;
        cin >> k >> x;
        if (x <= (k * (k + 1)) / 2)
        {
            if (x == (k * (k + 1)) / 2)
                cout << k << '\n';
            else
            {
                cout << ceil((-1 + sqrt(1 + 8 * x)) / 2) << '\n';
            }
        }
        else
        {
            ll c1 = (k * (k - 1)) / 2;
            x -= (k * (k + 1)) / 2;
            if (x > c1)
                cout << 2 * k - 1 << '\n';
            else
            {
                ll c2 = -2 * x + 2 * c1;
                cout << std::fixed << setprecision(0)
                     << k + k - 1 - floor((-1 + sqrt(1 + 4 * c2)) / 2) << '\n';
            }
        }
    }
}