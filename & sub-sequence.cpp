// Link :
// https://www.hackerrank.com/contests/goc-cdc-series-25/challenges/sub-sequence-2
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
    vector<int> a(n);
    vector<int> cnt(32, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < 32; j++) {
            if ((a[i] >> j) & 1)
                cnt[j]++;
        }
    }
    cout << *max_element(cnt.begin(), cnt.end()) << nl;
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
