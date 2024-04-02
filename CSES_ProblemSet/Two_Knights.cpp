// Link : https://cses.fi/problemset/task/1072
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
    long long n;
    cin >> n;

    cout << 0 << endl;
    for (long long i = 2; i <= n; i++)
    {
        cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
    }
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