// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here2
    int n;
    cin >> n;

    vector<ll int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll int ans = -1e18, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        ans = max(ans, sum);
        if (i < n && (max(a[i], -a[i])) % 2 == (max(a[i + 1], -a[i + 1])) % 2)
            sum = 0;
        if (sum < 0)
            sum = 0;
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