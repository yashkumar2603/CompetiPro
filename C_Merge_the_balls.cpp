// Link : https://atcoder.jp/contests/abc351/tasks/abc351_c
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
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(A[i]);
        if (v.size() <= 1)
            continue;
        if (v[v.size() - 1] != v[v.size() - 2])
            continue;
        while (v[v.size() - 1] == v[v.size() - 2])
        {
            int r = v[v.size() - 1];
            v.pop_back();
            v.pop_back();
            v.push_back(r + 1);
            if (v.size() <= 1)
                break;
        }
    }
    cout << v.size() << nl;
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