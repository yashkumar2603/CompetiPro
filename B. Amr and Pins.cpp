// Link : https://codeforces.com/problemset/problem/507/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    double r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << ceil(d / (2 * r)) << nl;
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
