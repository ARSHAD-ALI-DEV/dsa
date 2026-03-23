// question no 509 on leetcode

#include <iostream>
#include <vector>

using namespace std;

int fib(int n)
{

    if (n == 0 || n == 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << fib(3) << endl;

    cout << "hi arshad" << endl;
    return 0;
}