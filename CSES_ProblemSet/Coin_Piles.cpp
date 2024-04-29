// Link : https://cses.fi/problemset/task/1754
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
    int a, b;
    cin >> a >> b;

    while (true)
    {
        /// Assume a < b and make them balance
        if (a > b)
            swap(a, b);

        int A = min(a / 1, b - a); /// Remove first 1 in a then 2 in b: min(a / 1, b - a)
        int B = min(b / 2, b - a); /// Remove first 2 in b then 1 in a: min(b / 2, b - a)
        int t = max(A, B);         /// Select better way
        if (t == 0)
            break; /// Both remain the same
        a -= t;
        b -= t * 2;
    }

    /// Remove (1 in a, 2 in b) and (2 in a, 1 in b) at the same time
    int t = min(a, b) / 3;
    a -= t * 3;
    b -= t * 3;

    cout << (a == 0 && b == 0 ? "YES\n" : "NO\n");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }
    return 0;
}