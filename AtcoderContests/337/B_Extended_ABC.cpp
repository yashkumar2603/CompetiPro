#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    string s1 = s;
    sort(s1.begin(), s1.end());
    if (s1 == s)
    {
        cout << "Yes"
             << "\n";
    }
    else
        cout << "No"
             << "\n";
    return 0;
}