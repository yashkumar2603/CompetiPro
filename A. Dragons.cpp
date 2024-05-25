// Link : https://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> x(n);

    for (int i = 0; i < n; i++)
        cin >> x[i].first >> x[i].second;

    sort(x.begin(), x.end());

    for (int i = 0; i < n; i++) {
        if (s > x[i].first)
            s += x[i].second;
        else {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
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
