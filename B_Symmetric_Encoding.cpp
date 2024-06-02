// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[s[i]]++;

    string r;
    for (auto it : mp)
        r.push_back(it.first);

    sort(r.begin(), r.end());
    unordered_map<char, char> rep;
    for (int i = 0; i < r.size(); i++) {
        rep[r[i]] = r[r.size() - i - 1];
    }
    for (int i = 0; i < n; i++) {
        s[i] = rep[s[i]];
    }
    cout << s << nl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}