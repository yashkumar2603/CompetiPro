// Link : https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// the task here is to use the spiral pattern observation to gove the output back in O(1).
// as the time limit is 1s for multiple test cases.

// Read this -> https://medium.com/@Rigor_08/cses-number-spiral-solution-304bebe1793b

void solution()
{
    // write your code here
    long long x, y;
    cin >> y >> x;

    long long maxi = max(x, y);
    long long square = (maxi - 1) * (maxi - 1);
    if (maxi % 2 == 0)
    {
        if (x > y) // vertical line of the square border
        {
            cout << square + y << endl;
        }
        else // horizontal line of the square border
        {
            cout << (maxi * maxi) - x + 1 << endl;
        }
    }
    else
    {
        if (x > y) // vertical line of the square border
        {
            cout << (maxi * maxi) - y + 1 << endl;
        }
        else // horizontal line o the square border.
        {
            cout << square + x << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}