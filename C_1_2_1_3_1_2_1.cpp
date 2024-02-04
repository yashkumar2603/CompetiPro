// Link : https://atcoder.jp/contests/abc247/tasks/abc247_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

string sequence(int n)
{
    if (n == 1)
        return "1";
    if (n == 0)
        return "";
    string ans = sequence(n - 1) + " " + to_string(n) + " " + sequence(n - 1);
    return ans;
}

void solution()
{
    // write your code here
    int n;
    cin >> n;
    string ans = sequence(n);
    cout << ans;
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