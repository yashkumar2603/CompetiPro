#include <algorithm> // For std::fill
#include <iostream>
#include <set>
#include <vector>

using namespace std;

// Function to transpose a matrix
vector<vector<int>> transpose(const vector<vector<int>> &mat) {
    int n = mat.size();
    vector<vector<int>> t(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            t[j][i] = mat[i][j];
        }
    }
    return t;
}

// Function to solve the grid comparison problem
void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid1(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid1[i][j];
        }
    }

    vector<vector<int>> grid2(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid2[i][j];
        }
    }

    // Check if dimensions are equal
    if (n == m) {
        set<frozen_set<int>> st;
        for (const vector<int> &row : grid1) {
            st.insert(frozen_set<int>(row.begin(), row.end()));
        }

        for (const vector<int> &row : grid2) {
            if (st.count(frozen_set<int>(row.begin(), row.end())) == 0) {
                cout << "NO" << endl;
                return;
            }
        }

        grid1 = transpose(grid1);
        grid2 = transpose(grid2);
        st.clear();

        for (const vector<int> &row : grid1) {
            st.insert(frozen_set<int>(row.begin(), row.end()));
        }

        for (const vector<int> &row : grid2) {
            if (st.count(frozenset<int>(row.begin(), row.end())) == 0) {
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
    } else {
        set<frozen_set<int>> st;
        for (const vector<int> &row : grid1) {
            st.insert(frozen_set<int>(row.begin(), row.end()));
        }

        for (const vector<int> &row : grid2) {
            if (st.count(frozenset<int>(row.begin(), row.end())) == 0) {
                cout << "NO" << endl;
                return;
            }
        }

        st.clear();
        for (int j = 0; j < m; ++j) {
            vector<int> col(n);
            std::fill(col.begin(), col.end(),
                      0); // Initialize column vector with zeros
            for (int i = 0; i < n; ++i) {
                col[i] = grid1[i][j];
            }
            st.insert(frozen_set<int>(col.begin(), col.end()));
        }

        for (int j = 0; j < m; ++j) {
            vector<int> col(n);
            std::fill(col.begin(), col.end(),
                      0); // Initialize column vector with zeros
            for (int i = 0; i < n; ++i) {
                col[i] = grid2[i][j];
            }
            if (st.count(frozenset<int>(col.begin(), col.end())) == 0) {
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i =
