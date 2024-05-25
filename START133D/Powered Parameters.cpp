// Link : https://www.codechef.com/START133D/problems/POWPM
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    ll n;
    cin >> n;
    ll a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll count = 0;
    ll prod = 1;
    int pc = 1;
    for (ll i = 1; i <= n; i++) {
        while (pc <= n) {
            prod *= a[i];

            if (prod <= a[pc])
                count++;
            pc++;
        }
        prod = 1;
        pc = 1;
    }
    cout << count << nl;
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
