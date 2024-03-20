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
    int in;
    unordered_map<int, int> input;
    for (int i = 1; i <= n; i++)
    {
        cin >> in;
        input[in] = i;
    }
    vector<int> ans(n);
    ans[0] = (input[-1]);
    int curr = input[-1];

    int i = 1;
    while (i < n)
    {
        ans[i] = input[curr];
        i++;
        curr = input[curr];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}