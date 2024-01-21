
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
int arr[N];
vector<int> dp(N, -1);

int func(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;
    cost = min(cost, func(i - 1) + abs(arr[i] - arr[i - 1]));
    if (i > 1)
    {
        cost = min(cost, func(i - 2) + abs(arr[i] - arr[i - 2]));
    }
    return dp[i] = cost;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << func(n - 1) << "\n";

    return 0;
}