// Link :
// https://www.hackerrank.com/contests/goc-cdc-series-1/challenges/dream-internship
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    int p1 = 0;
    int p2 = n - 1;
    int ans = 0;
    while (p1 < p2) {
        while (p1 < p2 && a[p1] * a[p2] > k)
            p2--;
        ans += p2 - p1;
        p1++;
    }
    cout << ans << nl;
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
