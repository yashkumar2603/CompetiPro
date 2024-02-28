// Link : https://codeforces.com/contest/1933/problem/D
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"
#define f(i, a, b) for (int i = a; i < b; i++)

void solution()
{
    // write your code here
    int n;
    cin >> n;
    int a[n];
    int gcd1 = 0;
    map<int, int> mp1;
    f(i, 0, n) cin >> a[i], gcd1 = (__gcd(gcd1, a[i])), mp1[a[i]]++;
    sort(a, a + n);
    if (mp1[a[0]] == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (gcd1 == a[0])
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    return;
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