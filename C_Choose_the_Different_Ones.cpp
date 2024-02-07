
// Link : https://codeforces.com/contest/1927/problem/C
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
    int n, m, A, B, k;
    int multi = 0;
    cin >> n >> m >> k;
    A = B = k / 2;
    vector<int> frqa(k);
    vector<int> frqb(k);
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= k)
            frqa[a[i] - 1]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (b[i] <= k)
            frqb[b[i] - 1]++;
    }

    for (int i = 0; i < k; i++)
    {
        if (frqb[i] && !frqa[i] && B)
        {
            B--;
        }
        else if (!frqb[i] && frqa[i] && A)
        {
            A--;
        }
        else if (frqb[i] && frqa[i])
        {
            multi++;
        }
    }
    if (A + B - multi == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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