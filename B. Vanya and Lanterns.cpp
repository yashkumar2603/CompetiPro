// Link : https://codeforces.com/problemset/problem/492/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n, l;
    cin >> n >> l;
    double a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    double max_diff = 2 * max(a[0], l - a[n - 1]);
    for (int i = 1; i < n; i++) {
        max_diff = max(max_diff, a[i] - a[i - 1]);
    }
    printf("%.10f\n", max_diff / 2);
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
