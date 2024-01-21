#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q;
    cin >> q;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < q; i++)
    {
        char in;
        ll num;
        cin >> in;
        cin >> num;
        if (in == 'a')
        {
            m[num]++;
        }
        else if (in == 't')
        {
            if (m[num] != 0)
                m[num]--;
        }
        else if (in == 'c')
        {
            cout << m[num] << "\n";
        }
    }

    return 0;
}