// question number 567 on leetcode

#include <iostream>
#include <string>
using namespace std;

bool isFreqSame(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

bool checkPermutation(string s1, string s2)
{
    if (s1.length() > s2.length())
        return false;

    int freq1[26] = {0};
    for (char c : s1)
        freq1[c - 'a']++;

    int freq2[26] = {0};

    // first window
    int windowSize = s1.length();
    for (int i = 0; i < windowSize; i++)
        freq2[s2[i] - 'a']++;

    if (isFreqSame(freq1, freq2))
        return true;

    // sliding window
    for (int i = windowSize; i < s2.length(); i++)
    {
        freq2[s2[i] - 'a']++;                       // add new char
        freq2[s2[i - windowSize] - 'a']--;          // remove old char

        if (isFreqSame(freq1, freq2))
            return true;
    }

    return false;
}

int main()
{
    string s1 = "sdah";
    string s2 = "arshad";

    cout << checkPermutation(s1, s2) << endl; // Output: 1 (true)

    return 0;
}