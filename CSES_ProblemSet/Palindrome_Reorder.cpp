// Link : https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution()
{
    string S;
    cin >> S;
    // write your code here
    int N = S.length();
    string ans(N, ' ');

    // frequency array to count the occurrence of each
    // character
    int freq[26] = {};
    for (int i = 0; i < N; i++)
    {
        freq[S[i] - 'A'] += 1;
    }

    // Count the number of character having odd frequency
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            cnt += 1;
        }
    }

    // If more than one characters have odd frequency, then
    // no solution exists
    if (cnt > 1)
    {
        cout << "NO SOLUTION";
        return;
    }

    int left = 0, right = N - 1;
    for (int i = 0; i < N; i++)
    {
        if (freq[S[i] - 'A'] % 2 == 1)
        {
            ans[N / 2] = S[i];
            freq[S[i] - 'A'] -= 1;
        }
        while (freq[S[i] - 'A'] > 0)
        {
            ans[left++] = ans[right--] = S[i];
            freq[S[i] - 'A'] -= 2;
        }
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}