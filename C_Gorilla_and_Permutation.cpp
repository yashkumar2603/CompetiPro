// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// Function to calculate f(i)
int sumF(const vector<int> &perm, int m) {
    int sum = 0, prefixSum = 0;
    for (int i = 0; i < perm.size(); ++i) {
        if (perm[i] <= m) {
            prefixSum += perm[i];
        }
        sum += prefixSum;
    }
    return sum;
}

// Function to calculate g(i)
int sumG(const vector<int> &perm, int k) {
    int sum = 0, prefixSum = 0;
    for (int i = 0; i < perm.size(); ++i) {
        if (perm[i] >= k) {
            prefixSum += perm[i];
        }
        sum += prefixSum;
    }
    return sum;
}

void solution() {
    // write your code here
    int n, m, k;
    cin >> n >> m >> k;

    // First loop: Print from n down to m+1
    for (int i = n; i >= m + 1; --i) {
        cout << i;
        if (i > m + 1) {
            cout << " ";
        }
    }

    // Second loop: Print from 1 to m
    for (int i = 1; i <= m; ++i) {
        cout << " " << i;
    }

    cout << endl;
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