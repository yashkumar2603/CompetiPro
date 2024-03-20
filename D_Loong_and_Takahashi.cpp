// Link : https://atcoder.jp/contests/abc335/tasks/abc335_d
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    vector<int> ans;

    if (m == 0)
        return ans;

    vector<vector<bool>> seen(m, vector<bool>(n, false));
    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};

    int x = 0, y = 0, di = 0;

    // Iterate from 0 to m * n - 1
    for (int i = 0; i < m * n; i++)
    {
        ans.push_back(matrix[x][y]);
        // on normal geeksforgeeks ui page it is showing
        // 'ans.push_back(matrix[x])' which gets copied as
        // this only and gives error on compilation,
        seen[x][y] = true;
        int newX = x + dr[di];
        int newY = y + dc[di];

        if (0 <= newX && newX < m && 0 <= newY && newY < n && !seen[newX][newY])
        {
            x = newX;
            y = newY;
        }
        else
        {
            di = (di + 1) % 4;
            x += dr[di];
            y += dc[di];
        }
    }
    return ans;
}

void solution()
{
    // write your code here
    int n;
    cin >> n;
    int num = 1;
    vector<vector<int>> a(n, vector<int>(n, -1));
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n - i; j++)
        {
            a[i][j] = num;
            num++;
        }
        for (int j = i + 1; j < n - i; j++)
        {
            a[j][n - i - 1] = num;
            num++;
        }
        for (int j = n - i - 2; j >= i; j--)
        {
            a[n - i - 1][j] = num;
            num++;
        }
        for (int j = n - i - 2; j > i; j--)
        {
            a[j][i] = num;
            num++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == -1)
            {
                cout << "T"
                     << " ";
                continue;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}