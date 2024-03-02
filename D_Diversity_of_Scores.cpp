// Link : https://atcoder.jp/contests/abc343/tasks/abc343_d
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

void solution()
{
    // write your code here
    ll n, t;
    cin >> n >> t;
    ll a, b;
    vector<ll> s(n, 0);
    ll temp = 0;
    unordered_map<ll, ll> unique;
    unique[0] = n;
    for (ll i = 0; i < t; i++)
    {
        cin >> a >> b;
        temp = s[a - 1];
        s[a - 1] += b;
        unique[s[a - 1]]++;
        if (unique[temp])
            unique[temp]--;

        if (unique[temp] == 0)
            unique.erase(temp);
        cout << unique.size() << nl;
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