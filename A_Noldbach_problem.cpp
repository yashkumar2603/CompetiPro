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
    int k;
    cin >> n >> k;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    set<int> s;
    vector<int> a;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            s.insert(i);
            a.push_back(i);
        }
    }
    int c = 0;
    for (int i = 2; i < a.size(); i++) {
        for (int j = 1; j < i; j++) {
            if (a[i] - a[j] - 1 == a[j - 1])
                c++;
        }
    }
    if (c >= k)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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