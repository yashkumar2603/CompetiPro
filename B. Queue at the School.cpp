// Link : https://codeforces.com/problemset/problem/266/B
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
    string s;
    cin >> n >> t >> s;
    while (t--) {
        for (int i = 1; i < n; ++i) {
            if (s[i] == 'G' && s[i - 1] == 'B') {
                s[i] = 'B';
                s[i - 1] = 'G';
                ++i;
            }
        }
    }
    cout << s << endl;
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
