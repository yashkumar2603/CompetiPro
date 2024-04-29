// Link : https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// basically print the binary of all the numbers till 2^n with leading zeroes.

void solution()
{
    // write your code here
    int n;
    cin >> n;
    vector<string> gray_code;
    gray_code.push_back("");
    for (int i = 0; i < n; i++)
    {
        int size = gray_code.size();
        for (int j = size - 1; j >= 0; j--)
        {
            gray_code.push_back(gray_code[j]);
        }
        size *= 2;
        for (int j = 0; j < size; j++)
        {
            if (j < gray_code.size() / 2)
            {
                gray_code[j] += "0";
            }
            else
            {
                gray_code[j] += "1";
            }
        }
    }
    for (int i = 0; i < gray_code.size(); i++)
    {
        cout << gray_code[i] << endl;
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