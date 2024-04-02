// Link : https://cses.fi/problemset/task/1070
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
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << nl;
        return;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION" << nl;
        return;
    }
    int start = n & 1 ? n - 1 : n; // start = n-1 if n is odd, ottherwise n.
    for (int i = start - 1; i > 0; i = i - 2)
        cout << i << " ";
    for (int i = start; i >= 2; i = i - 2)
        cout << i << " ";
    if (n & 1)
        cout << n; // add the n in the end if n is odd, anyways the previous element will be 2, so n-2>1 always
    cout << nl;
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