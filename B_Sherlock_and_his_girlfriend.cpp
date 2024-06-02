// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"
int sieve[100005];
void solution() {
    // write your code here
    int i, n, j;
    cin >> n;
    for (i = 2; i <= n + 1; i++) {
        if (!sieve[i])
            for (j = 2 * i; j <= n + 1; j += i)
                sieve[j] = 1;
    }

    if (n > 2)
        cout << "2\n";
    else
        cout << "1\n";

    for (i = 2; i <= n + 1; i++) {
        if (!sieve[i])
            cout << "1 ";
        else
            cout << "2 ";
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