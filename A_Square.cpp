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
    for (int i = 0; i < n; i++)
    {
        int ax, bx, cx, dx, ay, by, cy, dy;
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
        int side = min(sqrt(pow((ax - bx), 2) + pow((ay - by), 2)), sqrt(pow((ax - cx), 2) + pow((ay - cy), 2)));
        cout << side * side << "\n";
    }
    return 0;
}