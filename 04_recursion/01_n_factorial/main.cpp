#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n - 1);
}

int sumOfNnums(int n){
    if(n == 1){
        return 1  ;
    }

    return n + sumOfNnums(n - 1);
}

int main(){
    // cout << factorial(5) << endl;
    cout << sumOfNnums(4) << endl;
    return 0;
}