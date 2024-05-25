// Link : https://codeforces.com/problemset/problem/185/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"
const int MAX_N = 3;

struct Matrix {
    int mat[MAX_N][MAX_N];
}; // so that we can return a 2D array
Matrix matMul(Matrix a, Matrix b) { // O(n^3)
    Matrix ans;
    int i, j, k;
    for (i = 0; i < MAX_N; i++)
        for (j = 0; j < MAX_N; j++)
            for (ans.mat[i][j] = k = 0; k < MAX_N; k++) // if necessary,
                ans.mat[i][j] +=
                    a.mat[i][k] * b.mat[k][j]; // do modulo arithmetic here
    return ans;
}
Matrix matPow(Matrix base, int p) { // O(n^3 log p)
    Matrix ans;
    int i, j;
    for (i = 0; i < MAX_N; i++)
        for (j = 0; j < MAX_N; j++)
            ans.mat[i][j] = (i == j); // prepare identity matrix
    while (p) { // iterative version of Divide & Conquer exponentiation
        if (p & 1)
            ans = matMul(ans, base); // check if p is odd (last bit is on)
        base = matMul(base, base);   // square the base
        p >>= 1;                     // divide p by 2
    }
    return ans;
}

void solution() {
    // write your code here
    int n;
    cin >> n;

    int M[3][3] = {{3, 1, 3}, {0, 3, 1}, {0, 1, 3}};
    Matrix ans;
    ans = matPow(M, n);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
