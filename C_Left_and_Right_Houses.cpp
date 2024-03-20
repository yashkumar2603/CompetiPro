// Link : https://codeforces.com/contest/1945/problem/C
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
    string s;
    cin >> s;
    int left[2], right[2]; // declared 2 arrays of size 2
    left[0] = 0;
    left[1] = 0;
    right[0] = 0;
    right[1] = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            right[0]++; // initially everything is on the right side.
        }
        else
        {
            right[1]++; // initially everything is on the right side.
        }
    }

    int ans = -1;
    int val = INT_MAX;
    if ((n / 2) + (n % 2) <= right[1]) // if round off is less than numberr of 1s on the right at pos 0
    {

        val = n; // used to keep track of the difference in the number of 0s and 1s on left and right side of the string(minimize this)
        ans = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            right[0]--;
            left[0]++;
        }
        else
        {
            right[1]--;
            left[1]++;
        }

        int leftcnt = left[0] + left[1];    // total on the left side
        int rightcnt = right[0] + right[1]; // total on the right side;

        if ((leftcnt / 2) + (leftcnt % 2) <= left[0] && (rightcnt / 2) + (rightcnt % 2) <= right[1])
        {
            int x = abs(rightcnt - leftcnt); // minimize this difference.
            if (x < val)
            {
                val = x;
                ans = i + 1;
            }
        }
    }
    cout << ans << endl;
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