// Link : https://www.codechef.com/START133D/problems/MXALT
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    /*if (n == 2) {
        cout << a[1] - a[0] << nl;
        return;
    }
    if (n == 1) {
        cout << a[0] << nl;
        return;
    }*/
    sort(a, a + n);
    ll ans = 0;
    for (ll i = n - 1; i > n / 2; i--) {
        ans += a[i] - a[n - i - 1];
    }
    if (n % 2 != 0)
        ans += a[n / 2];
    if (n % 2 == 0)
        ans += a[n / 2] - a[n / 2 - 1];
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
