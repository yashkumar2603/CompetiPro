// Link : https://atcoder.jp/contests/abc355/tasks/abc355_d
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // variable to store the maximum
    // count
    int ans = 0;
    int count = 0;
    vector<pair<int, char>> data;
    int n;
    cin >> n;
    // storing the x and y
    // coordinates in data vector
    for (int i = 0; i < n; i++) {
        // pushing the x coordinate
        int l, r;
        cin >> l >> r;
        data.push_back({l, 'x'});
        // pushing the y coordinate
        data.push_back({r, 'y'});
    }
    // sorting of ranges
    sort(data.begin(), data.end());
    // Traverse the data vector to
    // count number of overlaps
    for (int i = 0; i < 2 * n; i++) {
        // if x occur it means a new range
        // is added so we increase count
        if (data[i].second == 'x')
            count++;
        // if y occur it means a range
        // is ended so we decrease count
        if (data[i].second == 'y') {
            count--;
            ans += count;
        }
        // updating the value of ans
        // after every traversal
    }
    // printing the maximum value
    cout << ans << endl;
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
