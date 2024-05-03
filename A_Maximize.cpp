// Link :
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
    int x;
    cin >> x;
    int m = 0;
    int ma = 0;
    int ans;
    for (int i = 1; i < x; i++)
    {
        m = __gcd(x, i) + i;
        if (m > ma)
        {
            ans = i;
            ma = m;
        }
    }
    cout << ans << nl;
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