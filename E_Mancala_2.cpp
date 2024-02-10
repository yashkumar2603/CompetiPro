// Link : https://atcoder.jp/contests/abc340/tasks/abc340_e
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

// Getting timed out, my algorithm ain't good.

void solution()
{
    // write your code here
    ll n, m;
    cin >> n >> m;
    ll c = 0;

    vector<ll> A(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    ll in;
    for (ll i = 0; i < m; i++)
    {
        cin >> in;
        ll hand = A[in];
        A[in] = 0;
        while (hand >= 1)
        {
            c++;
            A[(in + c) % n]++;
            hand--;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << A[i] << " ";
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