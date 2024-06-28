// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

long long memo[25][25];

long long operate(long long a, long long b, char op) {
    return (op == '+') ? a + b : a * b;
}

long long search(string expr, int index, int splits) {
    if (splits == 0)
        return stol(expr.substr(index));
    if (memo[index][splits] != -1)
        return memo[index][splits];

    long long result = __LONG_LONG_MAX__;

    for (int i = index; i < expr.size() - splits; ++i) {
        long long partA = stol(expr.substr(index, i - index + 1));
        long long partB = search(expr, i + 1, splits - 1);
        result = min(result, operate(partA, partB, '+'));
        result = min(result, operate(partA, partB, '*'));
    }

    return memo[index][splits] = result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num_splits;
        cin >> num_splits;
        string expression;
        cin >> expression;

        memset(memo, -1, sizeof(memo));
        cout << search(expression, 0, num_splits - 2) << endl;
    }

    return 0;
}
