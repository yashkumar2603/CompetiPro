#include <bits/stdc++.h>
#define ll long long
#define fio                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
#define all(x) (x).begin(), (x).end()

// Debug, remove before submit.
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)

int main()
{
    fio;
    int n = 3, m = 5;
    dbg_out(n, m);
    cin >> n >> m;
    cout << n << m;

    return 0;
}
