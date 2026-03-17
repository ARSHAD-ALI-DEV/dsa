// QUESTION NUMBER 50 ON LEETCODE.

#include <iostream>

using namespace std;

double myPow(double x, int n)
{

    long long binary = n;

    if (binary < 0)
    {
        x = 1 / x;
        binary = -binary;
    }

    double ans = 1;

    while (binary > 0)
    {

        if (binary % 2 == 1)
        {
            ans *= x;
        }

        x *= x;
        binary /= 2;
    }

    return ans;
}

int main()
{

    cout << myPow(2, 3);
    return 0;
}