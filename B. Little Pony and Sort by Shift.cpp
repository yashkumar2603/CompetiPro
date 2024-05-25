// Link : https://codeforces.com/problemset/problem/454/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    // sort the sequence, and then rotate and match.
    int n, s, v(0);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            s = i, v++;
    if (a[n - 1] > a[0])
        s = n - 1, v++;
    if (v == 0)
        cout << 0 << endl;
    else if (v > 1)
        cout << -1 << endl;
    else
        cout << n - 1 - s << endl;
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
