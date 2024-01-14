#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X;
    cin >> X;
    cout << 'L';
    for (int i = 0; i < X; i++)
    {
        cout << 'o';
    }
    cout << 'n';
    cout << 'g';
    return 0;
}