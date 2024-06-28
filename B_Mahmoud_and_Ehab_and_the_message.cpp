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
    int n, k, m;
    cin >> n >> k >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    unordered_map<int, int> gr;
    int grp = 1;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        while (x--) {
            int b;
            cin >> b;
            gr[b] = grp;
        }
        grp++;
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
    }
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