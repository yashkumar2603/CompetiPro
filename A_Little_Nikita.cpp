
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define nl "\n"

void solve() {
    int n, m;
    cin >> n >> m;

    if (n < m) {
        cout << "No" << nl;
        return;
    }
    if (!((n - m) & 1))
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}