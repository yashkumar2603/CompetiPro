#include <iostream>
#include <string>
using namespace std;

int minCombinedLength(const string &x, const string &y) {
    int lenX = x.length();
    int lenY = y.length();

    int maxCommon = 0;
    for (int i = 0; i < lenY; i++) {
        int p = i;
        int count = 0;
        for (int j = 0; j < lenX && p < lenY; j++) {
            if (x[j] == y[p]) {
                p++;
                count++;
            }
        }
        maxCommon = max(count, maxCommon);
    }

    return lenX + lenY - maxCommon;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases > 0) {
        string strA, strB;
        cin >> strA >> strB;

        int result = minCombinedLength(strA, strB);
        cout << result << '\n';

        testCases--;
    }

    return 0;
}
