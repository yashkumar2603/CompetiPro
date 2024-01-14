
// If odd, leave one and try to sort the best possible way from the remaining.
// if even, try to match it with the neighbours to keep it best.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    int nums[n] = {2};
    int in;

    for (int i = 0; i < k; i++)
    {
        cin >> in;
        nums[in]--;
    }

    bool flag = false;

    if (k % 2 != 0)
    {
        flag == true;
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
    }

    return 0;
}