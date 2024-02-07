#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
vector<int> cur_perm;
vector<vector<int>> all_sol;
int n;
void rec(int level)
{
    cout << "Level " << level << '\n';
    cout << "Map\n";
    for (auto v : mp)
    {
        cout << v.first << " --> " << v.second << " ";
    }
    cout << '\n';
    cout << "Cur_purm\n";
    //-----------------TU MADARCHOD HAI YASH -----------------//
    if (cur_perm.size() == n)
    {
        // cout << "{";
        for (auto v : cur_perm)
        {
            cout << v << " ";
        }
        // cout << "}";
        cout << '\n';
    }
    if (level == n)
    {
        // all_sol.push_back(cur_perm);
        return;
    }
    for (auto v : mp)
    {
        if (v.second != 0)
        {
            mp[v.first]--;
            cur_perm.push_back(v.first);
            rec(level + 1);
            cur_perm.pop_back();
            mp[v.first]++;
        }
    }
}
void solve()
{
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    rec(0);
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}