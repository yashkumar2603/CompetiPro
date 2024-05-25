// Link : https://codeforces.com/contest/1899/problem/E
#include <bits/stdc++.h>
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
    int mi = INT_MAX;
    int idx = n;
    bool sorted = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i >= 1) {
            if (a[i] < a[i - 1])
                sorted = false;
        }
        mi = min(mi, a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (mi == a[i]) {
            idx = i;
            break;
        }
    }

    if (sorted) {
        cout << "0" << nl;
        return;
    }
    int ans = idx;

    for (int i = idx; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "-1" << nl;
            return;
        }
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
