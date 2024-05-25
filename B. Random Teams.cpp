// Link : https://codeforces.com/problemset/problem/478/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

long long int pairs(long long int n) { return n * (n - 1) / 2; }

void solution() {
    // write your code here
    long long int n, m;
    cin >> n >> m;
    long long int a(n / m), b(n % m);
    long long int min = pairs(a) * (m - b) + pairs(a + 1) * b;
    long long int max = pairs(n - m + 1);
    cout << min << " " << max << endl;
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
