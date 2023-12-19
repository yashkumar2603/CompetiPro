

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

/*int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int x = 0, y = 0;
        int sum = 0;
        int ans = 0;
        sum += a[0];
        ans = max(ans, sum);
        x++;

        while (k > 0)
        {
            if (sum + a[x] > sum + b[y] &&)
            {
                x++;
                sum += a[x];
            }
            else if (y <= x && sum + a[x] < sum + b[y])
            {
                y++;
                sum += a[y];
            }

            else if (x < n)
            {
                sum += a[x];
                x++;
            }
            k--;
        }
        cout << sum << endl;
    }
    return 0;
}*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int mb = 0, s = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == k)
                break;

            s += a[i];
            mb = max(mb, b[i]);                   // max value of b array till ith posn.,
                                                  //  so that if we play a level again, we only play the one available with the max score boost
            ans = max(ans, s + mb * (k - 1 - i)); // max of current final score, best we will get by playing
                                                  // all reamining from the best available replayable mission.
        }
        cout << ans << endl;
    }

    return 0;
}