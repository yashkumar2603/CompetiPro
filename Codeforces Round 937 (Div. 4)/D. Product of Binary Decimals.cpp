// Link : https://codeforces.com/contest/1950/problem/D
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

vector<int> binary_decimals;

bool ok(int n) {
    if (n == 1) {
        return true;
    }
    bool ans = false;
    for (int i : binary_decimals) {
        if (n % i == 0) {
            ans |= ok(n / i);
        }
    }
    return ans;
}

void solution() {
    // write your code here
    ll n;
    cin >> n;
    cout << (ok(n) ? "YES\n" : "NO\n");
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 2; i < N; i++) {
        int curr = i;
        bool bad = false;
        while (curr) {
            if (curr % 10 > 1) {
                bad = true;
                break;
            }
            curr = curr / 10;
        }
        if (!bad)
            binary_decimals.push_back(i);
    }
    int T = 1;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
