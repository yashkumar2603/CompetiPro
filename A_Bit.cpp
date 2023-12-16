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

    int n;
    cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "X++" || s == "++X")
        {
            x += 1;
        }
        else if (s == "X--" || s == "--X")
        {
            x -= 1;
        }
    }

    cout << x << "\n";

    return 0;
}