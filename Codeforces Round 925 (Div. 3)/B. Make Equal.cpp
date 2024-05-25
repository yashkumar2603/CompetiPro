// Link : https://codeforces.com/contest/1931/problem/B
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
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sum = sum / n;
    int bsum = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < sum) {
            cout << "NO" << nl;
            return;
        }
        a[i + 1] += a[i] - sum;
        a[i] = sum;
    }
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
