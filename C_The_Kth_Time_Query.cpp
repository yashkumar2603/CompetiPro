// Link : https://atcoder.jp/contests/abc235/tasks/abc235_c
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

const int mod = 998244353, inf = 0x3f3f3f3f;
const char sp = ' ', nl = '\n';

void solve()
{
    int n, q;
    cin >> n >> q;
    unordered_map<int, vector<int>> m;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        m[x].push_back(i);
    }
    for (int i = 1; i <= q; ++i)
    {
        int x, k;
        cin >> x >> k;
        if (m[x].size() < k)
            cout << -1 << nl;
        else
            cout << m[x][k - 1] << nl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--)
        solve();
}