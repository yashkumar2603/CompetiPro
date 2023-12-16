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

    ll int n, m;
    cin >> n >> m;
    if (n > m / 2 && m != n)
    {
        cout << -1 << "\n";
        return 0;
    }
    if (m == n)
    {
        cout << 0 << "\n";
        return 0;
    }

    if (m % n != 0)
    {
        cout << -1;
        return 0;
    }
    ll int x = m / n;

    if (x % 2 != 0 && x % 3 != 0)
    {
        cout << -1 << "\n";
        return 0;
    }
    ll int a = 0, b = 0;
    int flag = 0;

    while (x != 1)
    {
        if (x % 2 == 0)
        {
            a++;
            x = x / 2;
        }
        else if (x % 3 == 0)
        {
            b++;
            x = x / 3;
        }
        else
        {
            break;
            flag = -1;
        }
    }
    if (x == 1 && flag == 0)
        cout << a + b;

    else
        cout << -1;

    return 0;
}