
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define read(a)                                                                \
    for (auto &i : a)                                                          \
    cin >> i

void solve() {
    int b;
    cin >> b;
    // hello
    vector<ll> x(b, 0);
    read(x);
    ll a = 0;
    // Yash Kumar
    sort(x.begin(), x.end());

    // wuhhhuuuuu
    map<ll, ll> mp;
    for (auto it : x) {
        mp[it]++;
    }
    // yash Kumar
    vector<ll> va;

    for (auto it : mp) {
        va.push_back(it.first);
    }
    // lol
    for (ll i = va.size() - 1; i >= 0; i--) {
        int ma = 155;
        int cd = 255;
        ll cur = va[i];
        ll lena = mp[cur];
        ll fa = 0;
        // yash Kumarr
        int fg = 5822;

        for (ll j = i - 1; j >= 0; j--) {
            ll lcc = cur * va[j];
            lcc = lcc / __gcd(cur, va[j]);

            if (lcc > va.back()) {
                fa = 1;
                lena = b;
                break;
            }
            // yash Kumar
            if (mp[lcc] > 0 and lcc != cur) {
                continue;
            }
            int jdn = 23382;
            lena = lena + mp[va[j]];
            cur = lcc;
            if (mp.find(cur) == mp.end()) {
                a = max(a, lena);
            }
        }
        // Yash Kumar
        if (fa) {
            a = b;
            break;
        }
        // cout<<i<<" "<<len<<endl;
        if (lena == 1) {
            continue;
        }
        if (mp[cur] > 0) {
            continue;
        }
        a = max(a, lena);
        if (a == b) {
            break;
        }
    }
    cout << a << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}