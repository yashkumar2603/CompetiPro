// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

const int IF = 1000000009;

char func(const vector<int> &a, int id) {
    int distL = (id == 0 ? IF : a[id] - a[id - 1]);
    int distR = (id + 1 == a.size() ? IF : a[id + 1] - a[id]);
    if (distL < distR)
        return 'L';
    if (distL > distR)
        return 'R';
    assert(false);
}

void solution() {
    // write your code here
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> l(n), r(n);
    l[0] = 0;
    r[n - 1] = 0;
    for (int i = 1; i < n; i++) {
        l[i] = l[i - 1] + (func(a, i - 1) == 'R' ? 1 : a[i] - a[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--) {
        r[i] = r[i + 1] + (func(a, i + 1) == 'L' ? 1 : a[i + 1] - a[i]);
    }
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        if (y > x)
            cout << l[y - 1] - l[x - 1] << nl;
        else if (y < x)
            cout << r[y - 1] - r[x - 1] << nl;
        else
            cout << "0" << nl;
    }
    cout << nl;
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