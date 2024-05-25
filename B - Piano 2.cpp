// Link : https://atcoder.jp/contests/abc355/tasks/abc355_b
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        v.push_back(make_pair(a[i], 1));
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        v.push_back(make_pair(b[i], 2));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n + m; i++) {
        if (v[i].second == 1 && v[i].second == v[i + 1].second) {
            cout << "Yes" << nl;
            return;
        }
    }
    cout << "No" << nl;
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
