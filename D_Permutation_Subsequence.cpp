// Link : https://atcoder.jp/contests/abc352/tasks/abc352_d
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
    int n, k;
    cin >> n >> k;
    int p[n];
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        mp[p[i]] = i;
    }
    int i = 1, j = k;
    int mi = INT_MAX;

    while (j <= n)
    {
        if (mp[j] >= mp[i])
            mi = min(mi, mp[j] - mp[i]);
        j++;
        i++;
    }
    cout << mi << " ";
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