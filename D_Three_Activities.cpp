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

    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;

        int a[n];
        int b[n];
        int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        int maxes[n];
        int flag[n];

        for (int i = 0; i < n; i++)
        {
            maxes[i] = max(a[i], max(b[i], c[i]));
            // employ flags to signify, which day we chose.
            if (maxes[i] == a[i])
            {
                flag[i] = 1;
            }
            if (maxes[i] == b[i])
            {
                flag[i] = 2;
            }
            if (maxes[i] == c[i])
            {
                flag[i] = 3;
            }
        }

        sort(maxes, maxes + n);
        int sum = 0;
        int used[3];
        for (int i = n - 1; i >= 0; i++)
        {
            sum += maxes[i];
        }

        // incomplete at the end.
    }
    return 0;
}