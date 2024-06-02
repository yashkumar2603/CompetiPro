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
    deque<char> dq;
    int cz = 0, co = 0;
    for (int i = 0; i < n; i++) {
        dq.push_back(s.at(i));
        if (s[i] == '1')
            co++;
        else
            cz++;
    }
    // cout << cz << co << nl;
    if (cz != co) {
        cout << "-1" << nl;
        return;
    }
    int cnt = 0;
    vector<int> ans;
    while (dq.size() != 0) {
        if (dq.front() != dq.back()) {
            dq.pop_back();
            dq.pop_front();
        } else {
            if (dq.back() == 1) {
                dq.push_front('0');
                dq.push_front('1');
                cnt++;
                ans.push_back(0);
            } else {
                dq.push_back('0');
                dq.push_back('1');
                cnt++;
                ans.push_back(dq.size() - 1);
            }
        }
    }
    cout << cnt << nl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << nl;
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