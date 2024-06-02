// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int x, y;
    cin >> x >> y;
    if ((x + y) == 0) {
        cout << "0" << nl;
        return;
    }
    int ans = (1 + y) / 2;
    int fre = 7 * (y / 2) + 11 * (y % 2);
    x = max(0, x - fre);
    ans += (x + 14) / 15;
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