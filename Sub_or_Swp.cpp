#include <iostream>
using namespace std;

long long finalY(long long X, long long Y)
{
    while (X != 0)
    {
        long long temp = X;
        X = Y % X;
        Y = temp;
    }
    return Y;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long X, Y;
        cin >> X >> Y;

        cout << finalY(X, Y) << endl;
    }

    return 0;
}
