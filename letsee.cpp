#include <iostream>
#include <string>

using namespace std;

bool isAlphaNum(char ch){
    if(
        ch >= 'a' && ch <= 'z' || 
        ch >= 'A' && ch <= 'Z' ||
        ch >= 0 && ch <= 9
    ){
        return true;
    }

    false;
}

bool isValidPali(string s){
    int st = 0, end = s.length() - 1;
    while(st < end){
        if(!isAlphaNum(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNum(s[end])){
            end--;
            continue;
        }

        if(tolower(s[st] != tolower(s[end]))){
            return false;
        }

        st++;
        end--;
    }

    return true;
}

int main(){
    string s = "";
    if(isValidPali(s)){
        cout << "Palidrome" << endl;
    }else{
        cout << "NOT a Palidrome" << endl;
    }
    cout << "hi arshad" << endl;
    return 0;
}