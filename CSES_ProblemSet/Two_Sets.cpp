// Link : https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// for every 4 numbers, the sum of 1st and 4th equals the sum of 2nd and 3rd.

void solution()
{
    // write your code here
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum & 1)
    {
        cout << "NO" << nl;
        return;
    }
    set<ll> s1, s2;
    ll target = sum / 2;
    ll t = n;
    for (int i = 0; i < n; i++)
    {
        s1.insert(i + 1);
    }
    while (s1.count(target) == 0)
    {
        target -= t;
        s2.insert(t);
        s1.erase(t);
        t--;
    }
    s2.insert(target);
    s1.erase(target);
    cout << "YES" << nl;
    cout << s1.size() << nl;
    for (auto &i1 : s1)
        cout << i1 << " ";
    cout << nl;
    cout << s2.size() << nl;
    for (auto &i2 : s2)
        cout << i2 << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}