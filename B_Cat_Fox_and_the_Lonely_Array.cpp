// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

bool check(vector<int> &a, int k, int n) {
    vector<int> freq(22);
    for (int i = 0; i < k; i++) {
        int j = 0;
        int x = a[i];
        while (x > 0) {
            if (x % 2)
                freq[j]++;
            j++;
            x /= 2;
        }
    }
    vector<int> arr = freq;
    for (int i = k; i < n; i++) {
        int x = a[i];
        int j = 0;
        while (x > 0) {
            if (x % 2)
                freq[j]++;
            j++;
            x /= 2;
        }
        j = 0;
        x = a[i - k];
        while (x > 0) {
            if (x % 2)
                freq[j]--;
            j++;
            x /= 2;
        }
        for (int l = 0; l < 22; l++) {
            if (freq[l] > 0 && arr[l] == 0)
                return false;
            if (freq[l] == 0 && arr[l] > 0)
                return false;
        }
    }
    return true;
}

void solution() {
    // write your code here
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll low = 1;
    ll high = n;
    ll ans = n;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (check(a, mid, n)) {
            high = mid - 1;
            ans = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << nl;
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