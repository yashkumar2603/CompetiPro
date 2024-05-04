// Link : https://codeforces.com/contest/1932/problem/C
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
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string s;
    cin >> s;
    int j = 0, k = n - 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'L')
        {
            j++;
        }
        else if (s[i] == 'R')
        {
            k--;
        }
    }
    vector<int> prod(n);
    prod[n - 1] = a[k] % m;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == 'L')
        {
            prod[i] = (prod[i + 1] * a[--j]) % m;
        }
        else if (s[i] == 'R')
        {
            prod[i] = (prod[i + 1] * a[++k]) % m;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << prod[i] << " ";
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