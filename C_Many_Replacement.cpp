// Link : https://atcoder.jp/contests/abc342/tasks/abc342_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution()
{
    // write your code here
    int n;
    cin >> n;
    string S;
    cin >> S;
    unsigned Q;
    cin >> Q;
    // Construct strings before and after conversion
    string from, to;
    // Initialize them with strings that contain all lowercase English alphabet
    from = to = "abcdefghijklmnopqrstuvwxyz"s;
    for (unsigned i = 0; i < Q; ++i)
    {
        char c, d;
        cin >> c >> d;
        for (auto &&m : to)
            if (m == c) // For each occurrence of c,
                m = d;  // replace it with d
    }
    for (const auto c : S)
        for (unsigned i = 0; i < 26; ++i)
            if (c == from[i])  // From the string before conversion,
                cout << to[i]; // find the string after conversion
    cout << endl;
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