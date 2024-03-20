// Link : https://codeforces.com/contest/1941/problem/C
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
    string s;
    cin >> n;
    cin >> s;
    int ct = 0;
    for (int i = 0; i < n - 2; i++)
    {
        string check;
        check += s[i];
        check += s[i + 1];
        check += s[i + 2];
        if (check == "map" || check == "pie")
        {
            if (check == "map")
            {
                if (s[i + 3] == 'i' && s[i + 4] == 'e')
                {
                    continue;
                }
            }
            ct++;
        }
    }
    cout << ct << nl;
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