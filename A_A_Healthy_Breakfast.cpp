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
    string s;
    cin >> s;
    bool r = false;
    bool m = false;
    for (int i = 0; i < 3; i++) {
        if (s[i] == 'R')
            r = true;
        if (s[i] == 'M' && r) {
            m = true;
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