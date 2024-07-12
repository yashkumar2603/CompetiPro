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
    string s, t;
    cin >> s >> t;
    string check = "";
    int k;
    for (int i = 0; i < s.size() - 1; i++) {
        for (int j = 0; j <= i; j++) {
            k = j;
            while (k < s.size()) {
                check += s[k];
                k += i;
            }
            if (check == t) {
                cout << "Yes" << nl;
                return;
            }
        }
        check = "";
    }
    cout << "No" << nl;
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