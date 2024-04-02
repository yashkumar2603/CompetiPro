// Link : https://atcoder.jp/contests/abc346/tasks/abc346_b
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution()
{
    // write your code here
    int w, b;
    cin >> w >> b;
    string t = "wbwbwwbwbwbw";
    string s = "";
    while (s.size() < w + b + 2 * size(t))
        s += t;

    for (int i = 0; i < t.size(); i++)
    {
        int currw = 0, currb = 0;
        string st = s.substr(i, w + b);
        for (auto &it : st)
        {
            if (it == 'w')
                currw++;
            if (it == 'b')
                currb++;
            if (currw == w && currb == b)
            {
                cout << "Yes" << nl;
                return;
            }
        }
    }
    cout << "No" << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}