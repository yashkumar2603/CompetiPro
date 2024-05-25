// Link : https://codeforces.com/problemset/problem/312/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    float a, b, c, d;
    cin >> a >> b >> c >> d;

    float p = (float)a / b;
    float q = (float)(1 - (float)(a / b)) * (1 - (float)(c / d));

    printf("%0.7f", (p / (1 - q)));
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
