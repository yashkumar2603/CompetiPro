// Link : https://atcoder.jp/contests/abc344/tasks/abc344_a
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

void solution()
{
    // write your code here
    string s;
    cin >> s;
    string ans;
    bool flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (flag == 0)
        {

            if (s[i] != '|')
            {
                ans += s[i];
            }
            else
            {
                flag = 1;
                continue;
            }
        }
        if (flag == 1)
        {
            if (s[i] == '|')
            {
                flag = 0;
            }
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