#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

// Debug, remove before submit.
/*void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr<<' '<< H; dbg_out(T...); }
#define dbg(...) cerr << '(' << #__VA_ARGS__<<'):', dbg_out(__VA_ARGS__)*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        int t = v[i];
        bool flag = true;

        for (int j = i - 1; j > i - x - 1; j--)
        {
            if (j >= 0)
                if (t >= v[j])
                    flag = false;
        }

        for (int j = i + 1; j < i + y + 1; j++)
        {
            if (j < n)
                if (t >= v[j])
                    flag = false;
        }

        if (flag)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}