// Link : https://atcoder.jp/contests/abc344/tasks/abc344_e
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define eb emplace_back

using namespace std;
using vi = vector<lli>;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution()
{
    lli n;
    cin >> n;
    map<lli, lli> nxt, pvr;
    vi a(n);
    for (auto &x : a)
        cin >> x;
    const lli first = -1, last = -2;
    nxt[first] = a[0];
    pvr[a[0]] = first;

    nxt[a[n - 1]] = last;
    pvr[last] = a[n - 1];

    for (lli i = 1; i < n; i++)
    {
        const lli u = a[i - 1], v = a[i];
        nxt[u] = v;
        pvr[v] = u;
    }

    lli q;
    cin >> q;
    while (q--)
    {
        lli t;
        cin >> t;
        if (t == 1)
        {
            lli x, y;
            cin >> x >> y;
            const lli oldAfterX = nxt[x];
            nxt[x] = y;
            nxt[y] = oldAfterX;
            pvr[oldAfterX] = y;
            pvr[y] = x;
            continue;
        }
        lli x;
        cin >> x;
        const lli beforeX = pvr[x], afterX = nxt[x];
        pvr.erase(x);
        nxt.erase(x);
        nxt[beforeX] = afterX;
        pvr[afterX] = beforeX;
    }

    a.clear();
    lli cur = nxt[first];
    while (cur != last)
    {
        a.eb(cur);
        cur = nxt[cur];
    }

    for (auto x : a)
        cout << x << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}