// Link : https://atcoder.jp/contests/abc349/tasks/abc349_c
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
    string s, t;
    cin >> s >> t;
    ll j = 0;
    for (auto x : s)
    {
        if (j == 3)
            break;
        if (x - 'a' == t[j] - 'A')
            j++;
    }
    if (j < 3 && t[j] == 'X')

        cout << (j == 3 ? "Yes" : "No") << endl;
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