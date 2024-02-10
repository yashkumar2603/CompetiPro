// Link : https://atcoder.jp/contests/abc340/tasks/abc340_b
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
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int q1, q2;
        cin >> q1 >> q2;
        if (q1 == 1)
        {
            v.push_back(q2);
        }
        else if (q1 == 2)
        {
            cout << v[v.size() - q2] << nl;
        }
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