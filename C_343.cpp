// Link : https://atcoder.jp/contests/abc343/tasks/abc343_c

// See an elegant solution, this is worse than Brute force.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

void solution()
{
    // write your code here
    unsigned ll int c[] = {0,
                           1,
                           8,
                           343,
                           1331,
                           1030301,
                           1367631,
                           1003003001,
                           10662526601,
                           1000300030001,
                           1030607060301,
                           1334996994331,
                           1000030000300001,
                           1033394994933301,
                           1331399339931331,
                           1000003000003000001,
                           1003006007006003001,
                           1331039930399301331};

    unsigned ll int n;
    cin >> n;
    for (int i = 0; i < 18; i++)
    {
        if (n == c[i])
        {
            cout << c[i] << nl;
            return;
        }
        if (n < c[i])
        {
            cout << c[i - 1] << nl;
            return;
        }
    }
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
