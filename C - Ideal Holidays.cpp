// Link : https://atcoder.jp/contests/abc347/tasks/abc347_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    ll n, a, b;
    cin >> n >> a >> b;
    bool answer = true;
    for (int i = 0; i < n; i++) {
        ll t;
        cin >> t;
        if (t % (a + b) > a) {
            answer = false;
            cout << "No" << nl;
            return;
        }
    }
    cout << "Yes" << nl;
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
