#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    ll w;
    cin >> n >> w;

    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back(pair(x, y));
    }
    sort(v.begin(), v.end(), comp);
    /*for (ll i = 0; i < n; i++)
    {
        cout << v[i].first << " ";
    }*/

    // solution
    ll ans = 0;
    ll i = n - 1;
    while (w && i >= 0)
    {
        if (w >= v[i].second)
        {
            ans += v[i].first * v[i].second;
            w -= v[i].second;
        }

        else
        {
            ans += v[i].first * w;
            w = 0;
        }
        i--;
    }

    cout << ans << "\n";
    return 0;
}