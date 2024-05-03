// Link : https://codeforces.com/contest/1955/problem/C
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
    ll n, k;
    cin >> n >> k;
    deque<ll> dq(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> dq.at(i);
    }
    while (dq.size() > 1 && k)
    {
        ll mn = min(dq.front(), dq.back());
        if (k < 2 * mn)
        {
            dq.front() -= k / 2 + k % 2;
            dq.back() -= k / 2;
            k = 0;
        }
        else
        {
            dq.front() -= mn;
            dq.back() -= mn;
            k -= 2 * mn;
        }
        if (dq.front() == 0)
        {
            dq.pop_front();
        }
        if (dq.back() == 0)
        {
            dq.pop_back();
        }
    }
    int ans = n - dq.size();
    cout << ans + (dq.size() && dq.front() <= k) << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}