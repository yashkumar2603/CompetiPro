// Link : https://codeforces.com/problemset/problem/508/B
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
    int n(s.length() - 1), ind(n);

    for (int i = 0; i < n; i++)
        if ((s[i] - '0') % 2 == 0) {
            ind = i;
            if (s[n] > s[i])
                break;
        }

    if (n == ind)
        cout << -1 << endl;
    else {
        swap(s[ind], s[n]);
        cout << s << endl;
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
