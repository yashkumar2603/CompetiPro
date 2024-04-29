// Link : https://cses.fi/problemset/task/2165
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

vector<pair<int, int>> moves;
void hanoi(int n, int from, int to, int mid)
{
    if (n == 0)
        return;
    hanoi(n - 1, from, mid, to);
    moves.push_back(make_pair(from, to));
    hanoi(n - 1, mid, to, from);
}

void solution()
{
    // write your code here
    int n;
    cin >> n;

    hanoi(n, 1, 3, 2);
    cout << moves.size() << nl;
    for (int i = 0; i < moves.size(); i++)
    {
        cout << moves[i].first << " " << moves[i].second << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}