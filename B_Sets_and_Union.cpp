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
    int n;
    cin >> n;
    set<int> full;
    vector<set<int>> v;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        set<int> ts;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            full.insert(a);
            ts.insert(a);
        }
        v.push_back(ts);
    }
    int ans = 0;
    for (auto it : full) {
        int length = 0;
        set<int> ts;
        for (auto s : v) {
            if (s.find(it) == s.end()) {
                for (auto x : s)
                    ts.insert(x);
            }
        }
        length = ts.size();
        ans = max(ans, length);
    }

    cout << ans << nl;
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