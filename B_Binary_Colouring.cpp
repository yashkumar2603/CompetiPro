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
    ll y;
    cin >> y;
    vector<int> ans;

    for (int i = 0; i <= 31; i++) {
        if (y & (1LL << i))
            ans.push_back(1);
        else
            ans.push_back(0);
    }
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == 1 && i + 1 < ans.size() && ans[i + 1] == 1) {
            ans[i] = -1;
            int j = i + 1;
            while (j < ans.size() && ans[j] == 1) {
                ans[j] = 0;
                j++;
            }
            if (j < ans.size())
                ans[j] = 1;
            i = j - 1;
        }
    }
    cout << ans.size() << nl;
    for (int k = 0; k < ans.size(); k++)
        cout << ans[k] << " ";
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