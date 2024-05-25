// Link : https://codeforces.com/problemset/problem/451/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    ll i, j, k;
    ll n, count = 0;
    ll seg = 0;
    ll l, r;

    cin >> n;
    ll a[n], s[n];

    for (i = 0; i < n; i++) {
        cin >> a[i];
        s[i] = a[i];
    }

    sort(s, s + n);
    for (i = 0; i < n; i++) {
        if (s[i] == a[i])
            count++;
    }

    if (count == n) {
        cout << "yes\n1 1";
        return;
    }

    for (i = 0; i < n - 1, seg < 1;) {
        if (a[i] < a[i + 1]) {
            i++;
        }

        else {
            l = i;
            r = i;
            while (a[i] > a[i + 1] && i < n - 1) {
                i++;
                r++;
            }

            sort(a + l, a + r + 1);
            seg++;
        }
    }

    /*for(i=0;i<n;i++)
        cout<<a[i]<<" ";*/

    for (i = 0; i < n; i++) {
        if (s[i] != a[i]) {
            cout << "no";
            return;
        }
    }

    cout << "yes\n" << l + 1 << " " << r + 1;
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
