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

    for (int a = 0; a < t; a++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;

        int arr[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for (int i = 0; i < n; i++)
        {
            arr[s[i] - 'A']++;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[s[i] - 'A'] >= s[i] - 'A' + 1)
            {
                ans++;
                arr[s[i] - 'A'] = -1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}