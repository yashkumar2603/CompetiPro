#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (count(all(v), 0) == n)
    {
        cout << 0 << endl;
        return;
    }
    else if (count(all(v), 0) == 0)
    {
        cout << 1 << endl;
        return;
    }
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            continue;
        if (i == n - 1 or v[i + 1] == 0)
            c++;
    }
    c == 1 ? cout << 1 << endl : cout << 2 << endl;
}

int main()
{
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}