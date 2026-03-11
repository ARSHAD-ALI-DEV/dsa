#include <iostream>
using namespace std;

int binaryConverter(int n){
    int ans = 0, pow = 1;

    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
    
}

int decimalConverter(int bin){
    int ans = 0, pow = 1;
    while(bin > 0){
        int rem = bin % 10;
        ans += (rem * pow);
        bin /= 10;
        pow *= 2;
    }

    return ans;
    
}




int main()
{

    cout << binaryConverter(42) << endl;
    cout << decimalConverter(101010  ) << endl;
    return 0;
}
