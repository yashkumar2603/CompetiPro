// Link :
#include <bits/stdc++.h>

using namespace std;
#define all(x) (x).begin(), (x).end()

const int N = 1e5 + 10;
#define nl "\n"

#define int long long
#define vi vector<int>

void readInput(int &n, int &m, vi &numbers) {
    cin >> n >> m;
    numbers.resize(n);
    for (auto &num : numbers) {
        cin >> num;
    }
}

void processNumbers(const vi &numbers, int m, map<int, set<int>> &mp) {
    for (int num : numbers) {
        int mod = num % m;
        if (mp[mod].find(num) != mp[mod].end()) {
            mp[mod].erase(num);
        } else {
            mp[mod].insert(num);
        }
    }
}

int handleUnevenCases(map<int, set<int>> &mp, int m, int val) {
    vi v(mp[val].begin(), mp[val].end());
    int size = v.size();
    if (size == 1)
        return 0;

    vi pref(size, 0), suf(size, 0);
    pref[1] = v[1] - v[0];
    for (int i = 3; i < size; i += 2) {
        pref[i] = v[i] - v[i - 1] + pref[i - 2];
    }
    suf[size - 2] = v[size - 1] - v[size - 2];
    for (int i = size - 4; i >= 0; i -= 2) {
        suf[i] = v[i + 1] - v[i] + suf[i + 2];
    }

    int min_diff = LLONG_MAX;
    for (int i = 0; i < size; i += 2) {
        int x = 0;
        if (i > 0)
            x += pref[i - 1];
        if (i + 1 < size)
            x += suf[i + 1];
        min_diff = min(min_diff, x);
    }
    return min_diff / m;
}

int calculateResult(map<int, set<int>> &mp, int m) {
    int cnt = 0, val = -1, ans = 0;
    for (auto &x : mp) {
        if (x.second.size() % 2) {
            cnt++;
            val = x.first;
        }
    }

    if (cnt > 1)
        return -1;

    for (auto &x : mp) {
        if (x.first == val)
            continue;
        while (!x.second.empty()) {
            int first = *x.second.begin();
            x.second.erase(first);
            if (x.second.empty())
                break;
            int second = *x.second.begin();
            x.second.erase(second);
            ans += (second - first) / m;
        }
    }

    if (cnt) {
        ans += handleUnevenCases(mp, m, val);
    }
    return ans;
}

void solveTestCase() {
    int n, m;
    vi numbers;
    map<int, set<int>> mp;

    readInput(n, m, numbers);
    processNumbers(numbers, m, mp);
    cout << calculateResult(mp, m) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solveTestCase();
    }
    return 0;
}