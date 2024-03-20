// Link : https://atcoder.jp/contests/abc344/tasks/abc344_b
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
    int in = -1;
    vector<int> v;
    while (in != 0)
    {
        cin >> in;
        v.push_back(in);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << nl;
    }
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