#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

// Debug, remove before submit.
/*void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr<<' '<< H; dbg_out(T...); }
#define dbg(...) cerr << '(' << #__VA_ARGS__<<'):', dbg_out(__VA_ARGS__)*/

int main()
{

    int n, m;
    int ans = 0;
    int x = 0, y = 0;
    string s;

    cin >> n >> m;
    cin >> s;
    s += "0";

    for (int i = 0; i <= n; i++)
    {
        if (s[i] == '0')
        {
            ans = max(ans, max(x + y - m, y));
            x = 0, y = 0;
        }
        if (s[i] == '1')
            x++;
        if (s[i] == '2')
            y++;
    }

    cout << ans << endl;
    return 0;
}
