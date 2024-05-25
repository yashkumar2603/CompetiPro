// Link :
// https://www.hackerrank.com/contests/goc-cdc-series-1/challenges/playing-with-arrays-1
#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n;
    cin >> n;
    int a[n];
    int maxi[n];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxi[i] = a[i];
    }
    for (int i = n - 1; i >= 1; i--)
        maxi[i] = max(maxi[i + 1], a[i]);
    int ans = 0;
    for (int i = 1; i <= n - 1; i++)
        ans = max(ans, (maxi[i + 1] - a[i]));
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
