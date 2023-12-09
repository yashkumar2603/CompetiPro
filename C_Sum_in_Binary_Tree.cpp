#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()

// Debug, remove before submit.
/*void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<ll int> in;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll int input;
        cin >> input;
        in.push_back(input);
        ll int sum = 0;
        ll int temp = in[i];

        while (in[i] != 0)
        {
            if (in[i] % 2 == 0)
                in[i] = in[i] / 2;
            else
                in[i] = (in[i] - 1) / 2;
            sum += in[i];
        }
        cout << sum + temp << "\n";
    }
    return 0;
}