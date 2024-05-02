// Link : https://atcoder.jp/contests/abc350/tasks/abc350_c
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
    int n;
    cin >> n;
    int a[n];
    int m[n];
    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        m[a[i]] = i;
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i != m[i])
        {
            int p = m[i];
            ans.push_back(make_pair(i, m[i]));
            m[a[i]] = m[i];
            m[i] = i;
            a[p] = a[i];
            a[i] = i;
            c++;
        }
    }
    cout << c << nl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << nl;
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