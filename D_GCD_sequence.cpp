// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void solution() {
    // write your code here
    int n;
    cin >> n;
    vector<int> a(n), b(n - 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        b[i] = gcd(a[i], a[i + 1]);
    }

    int idx = -1;
    for (int i = 0; i < n - 1; i++) {
        if (b[i] > b[i + 1]) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        cout << "YES" << nl;
        return;
    }

    vector<int> a1, a2, a3;
    for (int i = 0; i < n; i++) {
        if (i != idx + 1)
            a1.push_back(a[i]);
        if (i != idx + 2)
            a2.push_back(a[i]);
        if (i != idx)
            a3.push_back(a[i]);
    }
    vector<int> b1(a1.size() - 1), b2(a2.size() - 1), b3(a3.size() - 1);
    for (int i = 0; i < n - 2; i++) {
        b1[i] = gcd(a1[i], a1[i + 1]);
        b2[i] = gcd(a2[i], a2[i + 1]);
        b3[i] = gcd(a3[i], a3[i + 1]);
    }
    bool f1 = true, f2 = true, f3 = true;
    for (int i = 0; i < n - 3; i++) {
        if (b1[i] > b1[i + 1])
            f1 = false;
        if (b2[i] > b2[i + 1])
            f2 = false;
        if (b3[i] > b3[i + 1])
            f3 = false;
    }

    if (f1 or f2 or f3)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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