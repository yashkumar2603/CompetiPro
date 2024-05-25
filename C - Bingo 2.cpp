// Link : https://atcoder.jp/contests/abc355/tasks/abc355_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n, t;
    cin >> n >> t;
    vector<int> a(t);
    unordered_map<int, int> mod, div;
    for (int i = 0; i < t; i++) {
        cin >> a[i];
        mod[a[i] % n]++;
        div[a[i] / n]++;
        if (div[a[i] / n] == n && mod.size() >= n) {
            cout << i + 1 << nl;
            return;
        } else if (mod.size() >= n && div.size() >= n) {
            cout << i + 1 << nl;
            return;
        } else if (mod[a[i] % n] == n && div.size() >= n) {
            cout << i + 1 << nl;
            return;
        }
    }
    cout << "-1" << nl;
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
