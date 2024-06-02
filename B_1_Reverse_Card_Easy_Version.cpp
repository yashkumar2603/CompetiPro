// Link : https://codeforces.com/problemset/problem/1967/B1
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

vector<int> phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
    return phi;
}

void solution() {
    // write your code here
    int n, m;
    cin >> n >> m;
    // find all the coprime pairs (a,b).

    vector<int> ans;
    ans = phi_1_to_n(min(m, n));
    int su = 0;
    for (int i = 0; i < ans.size(); i++) {
        su += ans[i];
    }

    cout << su << nl;
    // the division results in lcm(a,b)+(1%__gcd(a,b)) so if gcd ==1 then the
    // remainder is 0.
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