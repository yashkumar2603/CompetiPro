// Link : https://codeforces.com/contest/1968/problem/D
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// cant make a solution running at O(k), need something else.

void solution() {
    // write your code here
    /*ll n, k, s1, s2;
    cin >> n >> k >> s1 >> s2;
    s1--; // change to 0 based indexing
    s2--;
    vector<int> a(n), p(n);
    for (auto &x : p)
    {
        cin >> x;
        x--; // convert the positions px to 0-based indexing.
    }
    for (auto &x : a)
        cin >> x;

    auto getScr = [&](ll st) -> ll
    {
        ll scr = 0, cnt = 0;
        for (ll j = 1; j <= 2 * n && j <= k; j++) // it will loop after 2n
    rounds back to the same place.
        {
            cnt += a[st];
            scr = max(scr, cnt + a[st] * (k - j));
            st = p[st];
        }
        return scr;
    };

    const ll scr1 = getScr(s1);
    const ll scr2 = getScr(s2);
    if (scr1 > scr2)
    {
        cout << "Bodya" << endl;
        return;
    }
    if (scr1 < scr2)
    {
        cout << "Sasha" << endl;
        return;
    }
    cout << "Draw" << endl;
    return;*/
    ll n, k;
    cin >> n >> k;
    ll pb, ps;
    cin >> pb >> ps;
    vector<ll> a(n);
    vector<ll> s(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> s[i];

    vector<ll> vis(n, 0);
    vector<ll> pathb;
    vector<ll> paths;
    vis[pb - 1] = 1;
    while (true) {
        pathb.push_back(s[pb - 1]);
        pb = a[pb - 1];
        if (vis[pb - 1] == 1)
            break;
    }

    vis = vector<ll>(n, 0);
    vis[ps - 1] = 1;
    while (true) {
        paths.push_back(s[ps - 1]);
        ps = a[ps - 1];
        if (vis[ps - 1] == 1)
            break;
    }

    ll sb = 0, ss = 0;
    ll presum = 0;

    for (ll i = 0; i < pathb.size(); i++) {
        if (k < i + 1)
            break;
        ll currS = presum + pathb[i] * (k - i);
        sb = max(sb, currS);
        presum += pathb[i];
    }
    presum = 0;
    for (ll i = 0; i < paths.size(); i++) {
        if (k < i + 1)
            break;
        ll currS = presum + paths[i] * (k - i);
        ss = max(ss, currS);
        presum += paths[i];
    }

    if (sb > ss)
        cout << "Bodya" << nl;
    else if (sb == ss)
        cout << "Draw" << nl;
    else
        cout << "Sasha" << nl;
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