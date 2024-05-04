// Link : https://atcoder.jp/contests/abc352/tasks/abc352_b
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
    string s, t;
    cin >> s;
    cin >> t;
    unordered_map<char, vector<int>> mp;

    for (int i = 0; i < t.size(); i++)
    {
        mp[t[i]].push_back(i + 1);
    }
    map<char, int> printed;
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (printed[s[i]] != 1)
        {
            for (int j = 0; j < mp[s[i]].size(); j++)
            {
                ans.push_back(mp[s[i]][j]);
            }
        }
        printed[s[i]] = 1;
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
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