#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr){
    for(int i = 0; i < arr.size() - 1; i++){
        bool isSwap = false;
        for(int j  = 0; j < arr.size() - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j] , arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

void selectionSort(vector<int> &arr){
    for(int i = 0; i < arr.size() - 1; i++){
        int smallestIdx = i;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

void insertionSort(vector<int> &arr){
    for(int i = 1; i < arr.size(); i++){
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printArr(vector<int> &arr){
    for(int val : arr){
        cout << val << " ";
    }

    cout << endl;
}

int main(){

    vector<int> arr = {5,4,6,3,7,2,6,7};
    // bubbleSort(arr);
    // selectionSort(arr);
    insertionSort(arr);
    printArr(arr);
    cout << "hi arshad" << endl;
    return 0;
}