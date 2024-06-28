// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

int main() {
    int testCount; // Number of test cases
    cin >> testCount;

    while (testCount--) {
        int stringLength,
            positionsCount; // Length of the string and number of positions
        cin >> stringLength >> positionsCount;

        string inputString; // Input string
        cin >> inputString;

        vector<int> positions(positionsCount); // Positions vector
        for (int &position : positions) {
            cin >> position;
        }

        string replacementChars; // Characters to replace
        cin >> replacementChars;

        // Using a set to ensure unique positions and then sorting
        set<int> uniquePositions(positions.begin(), positions.end());
        vector<int> sortedPositions(uniquePositions.begin(),
                                    uniquePositions.end());
        sort(replacementChars.begin(), replacementChars.end());

        // Mapping each sorted position to the corresponding character
        map<int, char> positionToCharMap;
        for (size_t i = 0; i < sortedPositions.size(); ++i) {
            positionToCharMap[sortedPositions[i]] = replacementChars[i];
        }

        // Applying the replacement characters to the input string
        for (const auto &entry : positionToCharMap) {
            inputString[entry.first - 1] = entry.second;
        }

        // Output the modified string
        cout << inputString << endl;
    }

    return 0;
}
