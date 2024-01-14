#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int c = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            c++;
        }
        if (n % 2 == 1)
        {
            cout << c;
            return 0;
        }
        n = n / 2;
    }
    cout << c;
    return 0;
}