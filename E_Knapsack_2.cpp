// Link : https://atcoder.jp/contests/dp/tasks/dp_e
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"
int wt[105], val[105];
ll dp[105][100005];

long long func(int ind, int value_left)
{
    if (value_left == 0)
        return 0;
    if (ind < 0)
        return 1e15;
    if (dp[ind][value_left] != -1)
        return dp[ind][value_left];
    ll ans = func(ind - 1, value_left);
    if (value_left - val[ind] >= 0)
        ans = min(ans, func(ind - 1, value_left - val[ind]) + wt[ind]);
    return dp[ind][value_left] = ans;
}

void solution()
{
    // write your code here
    int n, w;
    cin >> n >> w;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    int max_value = 1e5;
    for (int i = max_value; i >= 0; --i)
    {
        if (func(n - 1, i) <= w)
        {
            cout << i << endl;
            break;
        }
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