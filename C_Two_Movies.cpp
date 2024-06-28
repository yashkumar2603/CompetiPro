
// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"
/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a, int b) {
    if (a < b)
        return a;
    return b;
}
ll min(int a, ll b) {
    if (a < b)
        return a;
    return b;
}
ll max(ll a, int b) {
    if (a > b)
        return a;
    return b;
}
ll max(int a, ll b) {
    if (a > b)
        return a;
    return b;
}
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a) {
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}
string to_lower(string a) {
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}
bool prime(ll a) {
    if (a == 1)
        return 0;
    for (int i = 2; i <= round(sqrt(a)); ++i)
        if (a % i == 0)
            return 0;
    return 1;
}
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

void solution() {
    // write your code here
    int n;
    cin >> n;

    vector<long long> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long long c = 0, p = 0, m = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            if (a[i] == -1) {
                m--;
            } else if (a[i] == 1) {
                p++;
            }
        }
    }

    long long x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i])
            continue;

        if (a[i] > b[i]) {
            x += a[i];
        } else {
            y += b[i];
        }
    }

    if (x > y) {
        swap(x, y);
    }

    c = p;
    long long q = min(y - x, c);
    x += q;
    c -= q;
    q = c / 2;
    c -= q;
    x += max(q, c);
    y += min(q, c);

    if (x > y) {
        swap(x, y);
    }

    c = m;
    q = max(x - y, c);
    y += q;
    c -= q;
    q = c / 2;
    c -= q;
    x += max(q, c);
    y += min(q, c);

    cout << min(x, y) << nl;
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