#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()

// Debug, remove before submit.
/*void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr<<' '<< H; dbg_out(T...); }
#define dbg(...) cerr << '(' << #__VA_ARGS__<<'):', dbg_out(__VA_ARGS__)*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int in[n];
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    // algo starts
    int b[3] = {1, 2, 3}; // board array
    for (int i = 0; i < n; i++)
    {
        if (in[i] == b[0])
        {
            swap(b[1], b[2]);
        }
        else if (in[i] == b[1])
        {
            swap(b[0], b[2]);
        }
        else if (in[i] == b[2])
        {
            cout << "NO"
                 << "\n";
            return 0;
        }
    }
    cout << "YES"
         << "\n";
    return 0;
}