// Link : https://cses.fi/problemset/task/1640

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
    int n, target;
    cin >> n >> target;

    vector<pair<int, int>> values;
    // append the element and its index
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        values.push_back({x, i + 1});
    }

    sort(values.begin(), values.end());
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        // adjust left and right pointers
        if (values[left].first + values[right].first > target)
        {
            right--;
        }
        else if (values[left].first + values[right].first < target)
        {
            left++;
        }
        else if (values[left].first + values[right].first == target)
        {
            cout << values[right].second << " " << values[left].second << endl;
            return;
        }
    }
    // print IMPOSSIBLE if we haven't found a pair
    cout << "IMPOSSIBLE" << endl;
    return;
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