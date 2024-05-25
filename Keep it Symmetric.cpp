// Link :
// https://www.hackerrank.com/contests/goc-cdc-series-25/challenges/keep-it-symmetric
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
    string s;
    cin >> s;
    int ans = 0, cnt = 0;
    int start, end;
    for (int i = 0; i < n; i++) {
        if (s[i] == '<')
            cnt++;
        if (s[i] == '>')
            cnt--;
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
