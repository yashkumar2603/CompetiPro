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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'E')
            x++;
        else if (s[i] == 'W')
            x--;
        else if (s[i] == 'N')
            y++;
        else
            y--;
    }

    if ((x & 1)) {
        cout << "NO" << nl;
        return;
    } else if (y & 1) {
        cout << "NO" << nl;
        return;
    }
    if (x == 0 && y == 0 && n == 2) {
        cout << "NO" << nl;
        return;
    }
    string ans;
    int r = 0, h = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'W' || s[i] == 'E') {
            if (x == 0) {
                ans += 'R';
            } else {
                x = abs(x);
                if (x & 1)
                    ans += 'H';
                else
                    ans += 'R';
                x--;
            }
        }
        if (s[i] == 'N' || s[i] == 'S') {
            if (y == 0)
                ans += 'R';
            else {
                y = abs(y);
                if (y & 1)
                    ans += 'H';
                else
                    ans += 'R';
                y--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (ans[i] == 'R')
            r++;
        else
            h++;
    }
    if (r == 0 || h == 0) {

        return;
    }
    cout << ans << nl;
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