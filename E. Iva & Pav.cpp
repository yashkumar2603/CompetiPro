// Link : https://codeforces.com/contest/1878/problem/E
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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l;
        int k;
        cin >> l >> k;
        int res = a[l];
        int idx = 0;
        for (int i = l + 1; i < n; i++) {
            res = res & a[i];
            if (res >= k)
                idx = max(idx, i);
        }
        cout << res << " ";
    }
    cout << nl;
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
