// Link : https://codeforces.com/contest/1927/problem/B
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
    vector<char> s(n);
    unordered_map<char, int> m;
    char k = 'a';
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            for (auto &x : m)
            {
                if (x.second == a[i])
                {
                    s[i] = x.first;
                    x.second++;
                    break;
                }
            }
        }
        else if (a[i] == 0)
        {
            s[i] = k;
            k++;
            m[s[i]]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }
    cout << nl;
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