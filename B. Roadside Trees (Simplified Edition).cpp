// Link : https://codeforces.com/problemset/problem/265/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n, h, h0(0);
    scanf("%d", &n);
    int time = n + n - 1; // n-1 is for the jumps from one tree to another and n
                          // is for the time to eat the nut.
    while (n--) {
        scanf("%d", &h);
        time += abs(h - h0);
        h0 = h;
    }
    printf("%d\n", time);
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
