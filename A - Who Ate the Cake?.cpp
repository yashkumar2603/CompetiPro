// Link : https://atcoder.jp/contests/abc355/tasks/abc355_a
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "-1" << nl;
        return;
    } else {
        if (a != 1 && b != 1)
            cout << "1" << nl;
        if (a != 2 && b != 2)
            cout << "2" << nl;
        if (a != 3 && b != 3)
            cout << "3" << nl;
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
