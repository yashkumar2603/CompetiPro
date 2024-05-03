// Link : https://codeforces.com/contest/1968/problem/C
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
    int ma = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    int ans[n];
    ans[0] = ma + 1;
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] + a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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