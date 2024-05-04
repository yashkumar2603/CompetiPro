// Link :
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
    // sort them according to difference of shoulder and head height, then add up all the shoulder heights
    // finally add the max(diff of shoulder and head height found)

    ll n;
    cin >> n;
    ll a[n], b[n];
    ll suma = 0;
    ll head = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
        cin >> b[i];
        head = max(head, b[i] - a[i]);
    }
    cout << suma + head << nl;
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