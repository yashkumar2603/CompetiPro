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
    int a, b, c;
    cin >> a >> b >> c;

    int max_product = a * b * c;

    for (int i = 0; i <= 5; ++i) {
        for (int j = 0; j <= 5 - i; ++j) {
            int k = 5 - i - j;
            int new_a = a + i;
            int new_b = b + j;
            int new_c = c + k;
            max_product = max(max_product, new_a * new_b * new_c);
        }
    }

    cout << max_product << endl;
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