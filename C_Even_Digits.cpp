#include <iostream>
#include <cmath>

using namespace std;

// Function to convert a number from base-10 to base-5
string toBase5(long long num)
{
    string result;
    while (num > 0)
    {
        result = to_string(num % 5) + result;
        num /= 5;
    }
    return result.empty() ? "0" : result;
}

// Function to calculate the N-th smallest good integer
long long calculateNthGoodInteger(long long N)
{
    if (N == 1)
    {
        return 0; // The smallest good integer is 0
    }

    // Convert N to base-5
    string base5Representation = toBase5(N - 1);

    // Replace each digit in base-5 representation with 2 * digit
    long long result = 0;
    long long power = 1;
    for (int i = base5Representation.length() - 1; i >= 0; --i)
    {
        int digit = base5Representation[i] - '0';
        result += 2 * digit * power;
        power *= 10;
    }

    return result;
}

int main()
{
    long long N;
    cin >> N;

    long long result = calculateNthGoodInteger(N);
    cout << result << endl;

    return 0;
}
