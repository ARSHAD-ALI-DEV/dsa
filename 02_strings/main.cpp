#include <iostream>
#include <algorithm>
#include <cstring>   // needed for strlen()

using namespace std;

int main(){

    char str[] = {'a', 'b', 'c'}; // just an char array not a valid string
    char str2[] = {'a', 'b', 'c' , '\0'}; // string because of \0 (null character)
    char str3[] = "hello"; // string literals (constant)

    cout << str << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    cout << strlen(str) << endl;
    cout << strlen(str2) << endl;
    cout << strlen(str3) << endl;

    cout << "hi arshad" << endl;

    return 0;
}