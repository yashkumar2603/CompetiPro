#include <iostream>
#include <string>

using namespace std;

int count_valid_pairs(int n) {
    int valid_pairs = 0;
    // Iterate through possible values of a
    for (int a = 1; a <= n * n; ++a) {
        // Calculate the length of the concatenated string
        int length = a * n;
        // Iterate through possible values of b
        for (int b = 1; b <= length; ++b) {
            // Check the length condition
            if (length >= b) {
                string remaining_str = string(n, 'n').substr(0, length - b);
                // Convert remaining string to integer (handling potential
                // exception)
                int remaining_int;
                try {
                    remaining_int = stoi(remaining_str);
                } catch (const invalid_argument &e) {
                    // Handle potential conversion error (leading digits might
                    // be '0')
                    continue;
                }
                // Check the value condition
                if (remaining_int == n * a - b) {
                    valid_pairs++;
                }
            }
        }
    }
    return valid_pairs;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int valid_count = count_valid_pairs(n);
        cout << valid_count << endl;
    }
    return 0;
}