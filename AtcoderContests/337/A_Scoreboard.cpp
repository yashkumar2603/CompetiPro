#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int X, Y;
    int sumx = 0;
    int sumy = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> X >> Y;
        sumx += X;
        sumy += Y;
    }
    if (sumx > sumy)
    {
        cout << "Takahashi"
             << "\n";
    }
    else if (sumx == sumy)
        cout << "Draw"
             << "\n";
    else
        cout << "Aoki"
             << "\n";
    return 0;
}