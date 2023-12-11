#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()

// Debug, remove before submit.
/*void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int keyh;
        cin >> keyh;

        int d[4];
        d[0] = -1;
        cin >> d[1];
        cin >> d[2];
        cin >> d[3];

        if (d[keyh] == 0)
            cout << "NO"
                 << "\n";
        if (d[d[keyh]] == 0)
            cout << "NO"
                 << "\n";
        if (d[d[d[keyh]]] == 0)
            cout << "YES"
                 << "\n";
    }
    return 0;
}