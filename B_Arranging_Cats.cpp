#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        string s;
        string f;
        int count = 0;

        cin >> s;
        cin >> f;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != f[i])
            {
                count++;
            }
        }
        int c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != f[i] && s[i] == '1')
            {
                c1++;
            }
        }

        int c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != f[i] && s[i] == '0')
            {
                c2++;
            }
        }

        cout << count - min(c1, c2) << "\n";
    }

    return 0;
}