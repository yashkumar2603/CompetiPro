// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
const string nl = "\n";

void solution()
{
    // write your code here
}
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> v(m);
    for (int i = 0; i < n; i++)
    {
        v[0].push_back(i);
    }
    while (q--)
    {
        int a, b;
        char c;
        cin >> c >> a >> b;
        if (c == 's')
        {
            v[b].push_back(v[a].back());
            v[a].pop_back();
        }
        else
        {
            if (v[a].size() > b)
            {
                cout << v[a][b] << nl;
            }
            else
            {
                cout << -1 << nl;
            }
        }
    }
    return 0;
}