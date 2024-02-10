// Link : https://atcoder.jp/contests/abc340/tasks/abc340_a
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
    int a, n, d;
    cin >> a >> n >> d;
    int c = a;
    if (a == n)
    {
        cout << a;
        return;
    }

    while (c != n)
    {
        cout << c << " ";
        c += d;
    }
    cout << n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}