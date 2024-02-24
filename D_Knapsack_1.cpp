// Link : https://atcoder.jp/contests/dp/tasks/dp_d
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"
ll wt[105], val[105];
ll dp[105][100005];

ll func(int ind, int wt_left)
{
    if (wt_left == 0)
        return 0;
    if (ind < 0)
        return 0;
    if (dp[ind][wt_left] != -1)
        return dp[ind][wt_left];
    // dont choose item at current ind
    ll ans = func(ind - 1, wt_left);
    // choose item at ind
    if (wt_left - wt[ind] >= 0)
        ans = max(ans, func(ind - 1, wt_left - wt[ind]) + val[ind]);

    return dp[ind][wt_left] = ans;
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
    cout << func(n - 1, w);
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