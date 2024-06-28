// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    int n;
    cin >> n;
    int previousx = 0, previousy = 0;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        int x;
        int y;
        cin >> x >> y;
        if (previousx == x && previousy == y)
            continue;

        int ma = max(previousx, previousy);
        int mi = min(x, y);

        if (previousx == previousy) {
            // already counted in answer previosX so increase max
            ++ma;
        }

        if (ma <= mi) {
            ans += mi - ma + 1;
        }

        previousx = x;
        previousy = y;
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