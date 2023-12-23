
// Find the max num of cookies (min of the three divisions)

// turn the magic powder into the ingredients (split it and do) Then see how many we can make.
// If doing this increases the answer, we are goog to go.

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

    int n, k;

    cin >> n >> k;

    int a[n];
    int b[n];
    int x_max = 0, x_min = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];

        int x = b[i] / a[i];
        x_max = max(x_max, x);
        x_min = min(x_min, x);
    }

    return 0;
}