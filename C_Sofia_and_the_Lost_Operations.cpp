#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int MAX_SIZE = 1e5 + 10;
#define nl "\n"

void solveTestCase() {
    int numElements;
    cin >> numElements;

    vector<int> arrayX(numElements), arrayY(numElements);
    set<int> uniqueY;

    for (int i = 0; i < numElements; ++i)
        cin >> arrayX[i];

    for (int i = 0; i < numElements; ++i) {
        cin >> arrayY[i];
        uniqueY.insert(arrayY[i]);
    }

    multiset<int> differingY;
    for (int i = 0; i < numElements; ++i) {
        if (arrayX[i] != arrayY[i]) {
            differingY.insert(arrayY[i]);
        }
    }

    int sequenceLength;
    cin >> sequenceLength;
    bool isPossible = false;

    for (int i = 0; i < sequenceLength; ++i) {
        int elem;
        cin >> elem;
        if (differingY.find(elem) != differingY.end()) {
            differingY.erase(differingY.find(elem));
            if (i == sequenceLength - 1) {
                isPossible = true;
            }
        } else if (uniqueY.count(elem)) {
            if (i == sequenceLength - 1) {
                isPossible = true;
            }
        }
    }

    if (isPossible && differingY.empty()) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solveTestCase();
    }

    return 0;
}
