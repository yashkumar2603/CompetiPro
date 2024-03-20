// Link : https://atcoder.jp/contests/abc335/tasks/abc335_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"
deque<pair<int, int>> pos;

void solution()
{
    // write your code here
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pos.push_back({i, 0});
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            char C;
            cin >> C;
            auto [x, y] = pos[0];
            if (C == 'R')
            {
                pos.push_front({x + 1, y});
            }
            else if (C == 'L')
            {
                pos.push_front({x - 1, y});
            }
            else if (C == 'U')
            {
                pos.push_front({x, y + 1});
            }
            else
            {
                pos.push_front({x, y - 1});
            }
            pos.pop_back();
        }
        else
        {
            int p;
            cin >> p;
            p--;
            cout << pos[p].first << " " << pos[p].second << endl;
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
