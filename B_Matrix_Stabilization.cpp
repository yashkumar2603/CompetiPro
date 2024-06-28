#include <bits/stdc++.h>

using namespace std;
#define all(x) (x).begin(), (x).end()

const int N = 1e5 + 10;
#define nl "\n"

#define int long long

void readMatrix(vector<vector<int>> &mat) {
    for (auto &row : mat) {
        for (auto &cell : row) {
            cin >> cell;
        }
    }
}

void processMatrix(vector<vector<int>> &mat, int rows, int cols) {
    vector<vector<int>> result = mat; // Initialize result matrix

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            int adjacentMax = 0;
            bool shouldUpdate = true;

            if (r > 0) {
                adjacentMax = max(adjacentMax, mat[r - 1][c]);
            }
            if (c > 0) {
                adjacentMax = max(adjacentMax, mat[r][c - 1]);
            }
            if (r < rows - 1) {
                adjacentMax = max(adjacentMax, mat[r + 1][c]);
            }
            if (c < cols - 1) {
                adjacentMax = max(adjacentMax, mat[r][c + 1]);
            }

            if (r > 0 && mat[r][c] <= mat[r - 1][c]) {
                shouldUpdate = false;
            }
            if (c > 0 && mat[r][c] <= mat[r][c - 1]) {
                shouldUpdate = false;
            }
            if (r < rows - 1 && mat[r][c] <= mat[r + 1][c]) {
                shouldUpdate = false;
            }
            if (c < cols - 1 && mat[r][c] <= mat[r][c + 1]) {
                shouldUpdate = false;
            }

            if (shouldUpdate) {
                result[r][c] = adjacentMax;
            }
        }
    }

    mat = result; // Update the original matrix
}

void printMatrix(const vector<vector<int>> &mat) {
    for (const auto &row : mat) {
        for (const auto &cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCount;
    cin >> testCount;

    while (testCount--) {
        int rowCount, colCount;
        cin >> rowCount >> colCount;
        vector<vector<int>> matrix(rowCount, vector<int>(colCount));

        readMatrix(matrix);
        processMatrix(matrix, rowCount, colCount);
        printMatrix(matrix);
    }

    return 0;
}
