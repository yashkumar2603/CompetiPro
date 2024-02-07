// Link : https://www.codechef.com/START120D/problems/LARGESTK343

#include <iostream>
using namespace std;

long long largestK(long long X, long long Y)
{
    return ((X + Y - 1) / (X - 1)) - 1;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long X, Y;
        cin >> X >> Y;

        cout << largestK(X, Y) << endl;
    }

    return 0;
}
