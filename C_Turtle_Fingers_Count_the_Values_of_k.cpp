// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl

void solution()
{
    // write your code here
    int a, b, l;
    cin >> a >> b >> l;
    int ans = 0;
    set<int> st1;
    for (int i = 0; i < 21; i++)
    {
        int z1 = (pow(a, i));
        if (l % z1 == 0)
        {
            int val1 = (l / z1);
            for (int j = 0; j < 21; j++)
            {
                int z2 = (pow(b, j));
                if (val1 % z2 == 0)
                {
                    st1.insert(val1 / z2);
                }
            }
        }
    }
    cout << st1.size() << endl;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}