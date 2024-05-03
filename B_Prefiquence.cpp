// Link : https://codeforces.com/contest/1968/problem/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int k = 0, j = 0;
        for (int i = 0; i < m && j < n; ++i)
        {
            if (b[i] == a[j])
            {
                ++k;
                ++j;
            }
        }

        cout << k << endl;
    }

    return 0;
}