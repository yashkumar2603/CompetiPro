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
    int in;
    vector<int> coins(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        coins.push_back(in);
        sum += in;
    }
    sort(all(coins));

    int me = 0;
    int num = 0;
    while (me <= sum)
    {
        me += coins[coins.size() - 1];
        sum -= coins[coins.size() - 1];
        coins.pop_back();
        num++;
    }
    cout << num;

    return 0;
}