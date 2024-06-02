// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

static bool comp(pair<ll, ll> &a, pair<ll, ll> &b) { return a.first > b.first; }

void solution() {
    // write your code here
    ll n;
    cin >> n;
    vector<ll> v(n);
    set<ll> s;
    vector<pair<ll, ll>> p;
    ll j = -1;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1)
            j = i;
        s.insert(i + 1);
    }

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        if (i % 2 != j % 2) {
            a[i] = n - v[i] + 2;
            s.erase(a[i]);
        } else
            p.push_back({v[i], i});
    }
    sort(p.begin(), p.end(), comp);
    ll k = 0;
    for (auto i : s) {
        a[p[k++].second] = i;
    }
    for (auto i : a)
        cout << i << " ";
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