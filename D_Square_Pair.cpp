// Link : https://atcoder.jp/contests/abc342/tasks/abc342_d
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution()
{
    int n;
    cin >> n;
    ll res = 0;
    map<int, int> mp;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            res += n - 1;

            cnt++;
            continue;
        }
        for (int j = 2; (ll)j * j <= x; j++)
        {
            int t = j * j;     // to make x rid of the square of j.
            while (x % t == 0) // to remove square of j from x
            {
                x /= t;
            }
        }
        res += mp[x]; // x now converted to square free version, count of all these square free versions is added to resultant.
        mp[x]++;
    }
    cout << res - (ll)cnt * (cnt - 1) / 2 << '\n';
    /*
    res - (ll)cnt * (cnt - 1) / 2 is used to subtract the count of pairs formed by zeros.
    (cnt * (cnt - 1)) / 2 calculates the number of pairs possible from cnt zeros using combination formula n choose 2.
    This value is then subtracted from res to eliminate the duplicate counting.
    */
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