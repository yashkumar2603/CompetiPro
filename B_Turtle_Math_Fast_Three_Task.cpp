// Link : https://codeforces.com/contest/1933/problem/B
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);

    if (sum % 3 == 0)
    {
        cout << "0" << nl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if ((sum - v[i]) % 3 == 0)
        {
            cout << "1" << nl;
            return;
        }
    }

    if ((sum + 1) % 3 == 0)
    {
        cout << "1" << nl;
        return;
    }

    cout << "2" << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}