// Link : https://atcoder.jp/contests/abc341/tasks/abc341_c
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
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    string grid[505];
    for (int i = 0; i < h; i++)
    {
        cin >> grid[i];
    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (grid[i][j] == '#')
                continue;
            int I = i, J = j;
            bool ok = true;
            for (auto c : t)
            {
                if (c == 'L')
                    J--;
                if (c == 'R')
                    J++;
                if (c == 'U')
                    I--;
                if (c == 'D')
                    I++;
                if (grid[I][J] == '#')
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans++;
        }
    }
    cout << ans << nl;
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