#include <bits/stdc++.h>
using namespace std;

void processTestCases() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int stringLength, requiredFrequency;
        cin >> stringLength >> requiredFrequency;
        string inputString;
        cin >> inputString;

        unordered_map<char, int> charFrequency;
        for (char ch : inputString) {
            charFrequency[ch]++;
        }

        int additionalChars = 0;
        string targetChars = "ABCDEFG";
        for (char target : targetChars) {
            if (charFrequency[target] < requiredFrequency) {
                additionalChars += (requiredFrequency - charFrequency[target]);
            }
        }

        cout << additionalChars << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    processTestCases();

    return 0;
}
