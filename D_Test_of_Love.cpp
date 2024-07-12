// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    int pos = m - 1;
    int waste = 0;
    int failures = 0;

    for (int i = 0; i < s.size(); ++i) {
        auto c = s[i];

        if (c == 'L') {
            pos = m;
        } else if (c == 'W') {
            if (pos <= 0) {
                waste++;
            }
        } else {
            if (pos <= 0) {
                failures++;
            }
        }
        pos--;
    }

    if (waste > k) {
        failures++;
    }

    if (failures != 0)
        cout << "NO" << nl;
    else
        cout << "YES" << nl;
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