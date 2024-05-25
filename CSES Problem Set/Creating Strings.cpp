// Link : https://cses.fi/problemset/task/1622
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    // Use a hashmap to store the counts of the characters that are in the
    // string and then print all possible combinations. the number of all
    // possible combinations is n! n is onlyy from 1 to 8. The answer for the
    // numbe of strings is n!/(a!*b!*....), a,b are the the number of elements
    // that are same.
    int n;
    string s;
    cin >> s;
    n = s.size();
    set<string> mp;
    sort(s.begin(), s.end());
    do {
        mp.insert(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << mp.size() << nl;
    for (string str : mp)
        cout << str << nl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
