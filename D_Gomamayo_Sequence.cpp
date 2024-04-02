// Link : https://atcoder.jp/contests/abc346/tasks/abc346_d
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// DP
int func(int i, int curr, vector<int> &a, vector<int> &c, int count)
{
    int n = a.size();
    if (i == n - 1)
        return 0;
    if (count == 1)
        return 0;

    int curr1 = 0, curr2 = 0;
    if (a[i] == a[i + 1])
    {
        curr1 = func(i + 1, curr + c[i], a, c, count - 1);
        curr2 = func(i + 1, curr, a, c, count);
    }
    return min(curr1, curr2);
}

void solution()
{
    // write your code here
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c(n);
    int count;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i < n - 1)
            if (a[i] == a[i + 1])
                count++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int ans = func(0, 0, a, c, count);
    cout << ans << nl;
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