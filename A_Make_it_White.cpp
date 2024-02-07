// Link : https://codeforces.com/contest/1927/problem/A
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
    // basically find the distaance between two farthest B.
    string s;
    cin >> s;
    int first = 0, last = 0, flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (flag == 0 && s[i] == 'B')
        {
            first = i;
            last = i;
            flag = 1;
        }
        else if (s[i] == 'B' && flag == 1)
        {
            last = i;
        }
    }
    cout << last - first + 1 << nl;
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