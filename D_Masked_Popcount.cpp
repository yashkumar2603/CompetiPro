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
    ll n, m;
    cin >> n >> m;
    vector<int> pos;
    for (int i = 0; i < 60; i++) {
        if ((m & (1 << i)))
            pos.push_back(i);
    }

    for (int i = 0; i < n; i++)
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