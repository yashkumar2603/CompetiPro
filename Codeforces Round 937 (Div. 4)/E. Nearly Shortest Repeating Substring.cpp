// Link : https://codeforces.com/contest/1950/problem/E
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    // we will make the suffix of length l and prefix repeat itself till it is
    // the length as s. then we check how many differences are there, if it is
    // one for either one of the suffix or prefix, then we return true
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            int satisfy = 2; // one for not matching due to the prefix and due
                             // to the string.
            for (int j = 0; j < i; j++) // checking in prefix
            {
                for (int k = j + i; k < n; k += i) {
                    if (s[k] != s[j]) {
                        satisfy--;
                    }
                }
            }
            if (satisfy > 0) {
                cout << i << endl;
                return;
            }
            satisfy = 2;
            for (int j = n - i; j < n; j++) // checking in suffix
            {
                for (int k = j - i; k >= 0; k -= i) {
                    if (s[k] != s[j]) {
                        satisfy--;
                    }
                }
            }
            if (satisfy > 0) {
                cout << i << endl;
                return;
            }
        }
    }
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
