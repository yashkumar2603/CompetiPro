// Link : https://atcoder.jp/contests/abc348/tasks/abc348_c
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
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a, c;
        cin >> a >> c;
        if (mp.find(c) != mp.end())
            mp[c] = min(a, mp[c]);
        else
            mp[c] = a;
    }
    int ans = 0;
    for (auto &x : mp) {
        ans = max(ans, x.second);
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
