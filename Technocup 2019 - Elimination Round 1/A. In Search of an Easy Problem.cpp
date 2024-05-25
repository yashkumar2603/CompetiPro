// Link : https://codeforces.com/problemset/problem/1030/A
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
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) {
            cout << "HARD" << nl;
            return;
        }
    }
    cout << "EASY" << nl;
    return;
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
