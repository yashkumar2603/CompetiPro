// Link : https://atcoder.jp/contests/abc352/tasks/abc352_b
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution()
{
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    while (i < s.size())
    {
        while (j < t.size())
        {
            if (s[i] == t[j])
            {
                cout << j + 1 << " ";
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
    }
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