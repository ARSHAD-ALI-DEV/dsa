#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> v = {1,2,3,4,5};

    cout << "[ ";
    for(int val:v){
        cout <<  val << ",";
    }
    cout << "]"<< endl;

    return 0;
}

