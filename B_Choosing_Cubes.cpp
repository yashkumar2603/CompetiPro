#include <bits/stdc++.h>
using namespace std;
#define int long long

void processQueries() {

    int arraySize, index, threshold;
    cin >> arraySize >> index >> threshold;
    vector<int> elements(arraySize);
    for (int i = 0; i < arraySize; i++) {
        cin >> elements[i];
    }

    int targetValue = elements[index - 1];
    sort(elements.begin(), elements.end());

    int largerCount = 0;
    for (int i = 0; i < arraySize; i++) {
        if (elements[i] > targetValue) {
            largerCount++;
        }
    }

    if (largerCount >= threshold) {
        cout << "NO\n";
    } else {
        int targetCount = 0;
        for (int i = 0; i < arraySize; i++) {
            if (elements[i] == targetValue) {
                targetCount++;
            }
        }

        if (largerCount + targetCount <= threshold) {
            cout << "YES\n";
        } else {
            cout << "MAYBE\n";
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testCases;
    cin >> testCases;
    while (testCases--)
        processQueries();
    return 0;
}
