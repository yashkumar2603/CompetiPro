
// Accepted at once .

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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, k;
    cin >> n >> s >> k;
    vector<int> p(n);
    vector<int> q(n);
    int pq_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int in1;
        int in2;
        cin >> in1 >> in2;
        p.push_back(in1);
        q.push_back(in2);
        pq_sum += in1 * in2;
    }
    if (pq_sum >= s)
        cout << pq_sum << "\n";
    else
        cout << pq_sum + k << "\n";

    return 0;
}