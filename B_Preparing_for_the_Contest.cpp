// start with a decrreasing array from n to 1, then swap 2 numbers k times.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

// Debug, remove before submit.
/*void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr<<' '<< H; dbg_out(T...); }
#define dbg(...) cerr << '(' << #__VA_ARGS__<<'):', dbg_out(__VA_ARGS__)*/

/*int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, k;
        cin >> n >> k;
        if (n == 0)
        {
            cout << 0 << endl;
            return 0;
        }

        if (n == 1)
        {
            cout << 1 << endl;
            return 0;
        }

        int arr[n];

        for (int i = n - 1; i >= 0; i--)
        {
            arr[n - i - 1] = n - i; // decreasing initialized.
            // cout << arr[n - i - 1];
        }
        // cout << endl;
        if (k == n - 1)
        {
            reverse(arr, arr + n);
            k = 0;
        }
        int s = 0;
        while (k > 0)
        {

            swap(arr[s], arr[s + 1]);
            k -= 1;
            s += 2;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

// NEW CODE.
// ALL THAT WE HAVE TO DO IS TO PRINT K NUMBERS IN INCREASING ORDER AND THEN N-K IN DECREASING.
// SO PRINT K NUMBERS INCREASING FIRST, THEN N-K DECREASING, ALL FROM 1 TO N.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        for (int i = n; i > k; i--)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}