// Link :
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
const int N = 1e5 + 10;
#define nl "\n"

void solution() {
    // write your code here
    vector<int> points(3);
    for (int index = 0; index < 3; ++index) {
        cin >> points[index];
    }

    sort(points.begin(), points.end());

    int bestMeetingPoint = points[1];
    int minimumTotalDistance =
        abs(points[0] - bestMeetingPoint) + abs(points[2] - bestMeetingPoint);

    for (const int &candidate : points) {
        int currentTotalDistance = 0;
        for (const int &point : points) {
            currentTotalDistance += abs(point - candidate);
        }
        if (currentTotalDistance < minimumTotalDistance) {
            minimumTotalDistance = currentTotalDistance;
        }
    }

    cout << minimumTotalDistance << endl;
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
