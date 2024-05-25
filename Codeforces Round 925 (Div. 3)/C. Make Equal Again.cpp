// Link : https://codeforces.com/contest/1931/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

// The idea is that we take the number of excluded number of elements from the
// start and end. Then the answer is n-(no. of suffix and prefix elements
// excluded)-1 . if the number of excluded prefix elements are k1 and the number
// of excluded of suffix elements is k2. then the no. of total excluded elements
// is k1+k2 if a[0] = a[n-1] else it is max(k1,k2) as we will keep the max no.
// of equal elements possible from any end.

void solution() {
    // write your code here
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i1 = 0;
    int i2 = 0;
    while (i1 < n && arr[i1] == arr[0])
        i1++;
    while (i2 >= 0 && arr[n - i2 - 1] == arr[n - 1])
        i2++;

    int ans;
    if (arr[0] == arr[n - 1]) {
        cout << max(0, (n - i1 - i2)) << nl;
        return;
    } else
        ans = max(i1, i2);

    cout << max(0, (n - ans)) << nl;
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
