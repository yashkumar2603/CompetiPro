// Link : https://codeforces.com/contest/1927/problem/D

// Works correct but getting TLE.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

void solution()
{
    // write your code here
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    for (int k = 0; k < q; k++)
    {
        int x, y;
        cin >> x >> y;
        int i = x - 1, j = y - 1;
        int o1 = -2, o2 = -2;
        while (i < j)
        {
            if (a[i] != a[j])
            {
                o1 = i;
                o2 = j;
                break;
            }
            else
            {
                i++;
            }
        }
        cout << o1 + 1 << " " << o2 + 1 << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}

// good solution i found

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n, 0);
        b[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] != a[i + 1])
                b[i] = i + 1;
            else if (b[i + 1] != i + 1)
                b[i] = b[i + 1];
            else
                b[i] = i;
        }
        int k;
        cin >> k;
        while (k--)
        {
            int l, r;
            cin >> l >> r;
            if (b[l - 1] <= r - 1 && b[l - 1] != l - 1)
                cout << l << " " << b[l - 1] + 1 << endl;
            else
                cout << "-1 -1" << endl;
        }
        cout << endl;
    }
}
