#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> input;
    int in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        input.push_back(in);
    }
    vector<int>::iterator x;
    x = find(input.begin(), input.end(), -1);

    vector<int> v;
    v.push_back(x - input.begin() + 1);
    for (int i = 0; i <= n; i++)
    {
        v.push_back(find(input.begin(), input.end(), input[x - input.begin()] + 1) - input.begin() + 1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}