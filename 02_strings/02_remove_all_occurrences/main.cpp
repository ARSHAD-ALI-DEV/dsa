//  question 1910 on leetcode

#include <iostream>
#include <string>

using namespace std;
string removeOccurrences(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{

    string s = "helloworld";
    string part = "hello";

    cout << removeOccurrences(s, part) << endl;

    cout << "hi arshad" << endl;
    return 0;
}