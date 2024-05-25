// Link : https://codeforces.com/problemset/problem/352/B
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
    vector<int> a(n);
    unordered_map<int, vector<int>> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (mp.find(a[i]) == mp.end()) {
            mp[a[i]].push_back(i);
            mp[a[i]].push_back(i);
            mp[a[i]].push_back(a[i]);
            mp[a[i]].push_back(1);
        } else {
            mp[a[i]][1] = i;
            mp[a[i]][2] += a[i];
            mp[a[i]][3]++;
        }
    }
    for (auto [x, v] : mp) {
        if (v[0] == v[1])
            cout << x << " " << "0" << nl;
        if (v[3] * (v[0] + v[1]) / 2 == v[2]) {
            cout << x << " " << (v[1] - v[0]) / v[3] - 1 << nl;
        }
    }
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
