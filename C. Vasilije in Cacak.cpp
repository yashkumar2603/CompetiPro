// Link : https://codeforces.com/contest/1878/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    ll n, k, x;
    cin >> n >> k >> x;

    ll misum = (k * (k + 1) / 2);
    ll masum = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);

    if (x <= masum && x >= misum)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
