// Link : https://www.codechef.com/START133D/problems/ABCC3
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n1;
    cin >> n1;
    string s;
    cin >> s;

    int ca = 0, cb = 0, cc = 0, m = 0;
    for (char ch : s) {
        if (ch == 'a')
            ca++;
        else if (ch == 'b') {
            if (ca > 0)
                cb++;
        } else if (ch == 'c') {
            if (ca > 0 && cb > 0) {
                m++;
                ca--;
                cb--;
            }
        }
    }
    cout << m << nl;
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
