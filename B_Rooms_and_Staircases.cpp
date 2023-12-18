
// VERY GOOD PROBLEM (REVIEW)

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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, n, a[1001];
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            a[i] = s[i] - '0';
        }
        if (a[0] == 1 || a[n - 1] == 1)
        {
            cout << n * 2 << endl;
        }
        else
        {
            int one = 0, leftVisit = 0, rightVisit = 0, ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 1)
                {
                    one = 1;
                    leftVisit = i;
                    break;
                }
            }
            int i = -1;
            for (int j = n - 1; j >= 0; j--)
            {
                i++;
                if (a[j] == 1)
                {
                    one = 1;
                    rightVisit = i;
                    break;
                }
            }
            // cout << leftVisit << " " << rightVisit << endl;
            ans = 2 * (n - min(leftVisit, rightVisit));
            if (one == 0)
            {
                cout << n << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
    }

    return 0;
}