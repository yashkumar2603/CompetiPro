// Link : https://atcoder.jp/contests/abc344/tasks/abc344_c
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
// Type slash-n here before u begin.
#define nl "\n"

bool binary_search(const vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}

void solution()
{
    int n, m, l, q;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cin >> l;
    vector<int> c(l);
    for (int i = 0; i < l; i++)
    {
        cin >> c[i];
    }
    cin >> q;
    vector<int> x(q);
    for (int i = 0; i < q; i++)
    {
        cin >> x[i];
    }

    // Preprocess arrays A and B to generate all possible sums and sort them
    vector<int> ab_sums;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ab_sums.push_back(a[i] + b[j]);
        }
    }
    sort(ab_sums.begin(), ab_sums.end());

    // Check for each element in C if there exists a pair of elements from A and B
    // whose sum matches the complement of the current element in C
    for (int i = 0; i < q; i++)
    {
        bool found = false;
        for (int j = 0; j < l; j++)
        {
            int complement = x[i] - c[j];
            if (binary_search(ab_sums, complement))
            {
                found = true;
                cout << "Yes" << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solution();
    return 0;
}
