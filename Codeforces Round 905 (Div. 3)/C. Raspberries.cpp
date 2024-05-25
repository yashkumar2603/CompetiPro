// Link : https://codeforces.com/contest/1883/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    //
    int n, k;
    cin >> n >> k;
    int a[n];
    int m[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[i] = a[i] % k;
        if (m[i] == 0) {
            cout << "0" << nl;
            return;
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(ans, k - m[i]);
    }
    cout << ans << nl;
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
