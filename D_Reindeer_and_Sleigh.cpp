// Link : https://atcoder.jp/contests/abc334/tasks/abc334_d
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
    int n, q;
    cin >> n >> q;
    vector<ll> r(n);
    for (int i = 0; i < n; i++)
        cin >> r[i];
    sort(r.begin(), r.end());
    vector<ll> s(n + 1);
    for (int i = 0; i < n; i++)
        s[i + 1] = s[i] + r[i]; // make prefix sum array.
    while (q--)
    {
        ll x;
        cin >> x;
        cout << upper_bound(s.begin(), s.end(), x) - s.begin() - 1 << endl; // binary search the required sum in the sums.
    }
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