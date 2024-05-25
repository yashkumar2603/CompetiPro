// Link : https://codeforces.com/contest/1931/problem/D
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// or we can store the modulo of each of the numbers in the array with x and y
// and then use the sum of those to determine if they are compatible together,
// we wil use a set or a hash for this(hash mp) This intuition was exactly
// correct.

void solution() {
    // write your code here
    long long n, x, y;
    cin >> n >> x >> y;
    int a[n];
    map<pair<long long, long long>, long long> m;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += m[{(x - a[i] % x) % x, a[i] % y}];
        m[{a[i] % x, a[i] % y}]++;
    }
    cout << ans << endl;
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
