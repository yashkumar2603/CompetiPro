// Link : https://codeforces.com/problemset/problem/298/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int t, x1, y1, x2, y2;
    cin >> t >> x1 >> y1 >> x2 >> y2;
    int nx = x2 - x1, ny = y2 - y1;
    vector<char> v(t);
    unordered_map<char, int> mp;
    bool east = false, north = false;
    if (nx > 0)
        east = true;
    if (ny > 0)
        north = true;
    nx = abs(nx);
    ny = abs(ny);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
        mp[v[i]]++;
        if ((v[i] == 'E' && east) && nx > 0)
            nx--;
        if ((v[i] == 'W' && !east) && nx > 0)
            nx--;
        if ((v[i] == 'S' && !north) && ny > 0)
            ny--;
        if ((v[i] == 'N' && north) && ny > 0)
            ny--;
        if (nx == 0 && ny == 0) {
            cout << i + 1 << nl;
            return;
        }
    }
    cout << "-1" << nl;
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
