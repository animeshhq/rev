#include <iostream>
using namespace std;

bool search(int arr[], int size, int val){
    for(int i=0; i<size; i++){
        if(arr[i] == val){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5, 7, -1, 4, 11, -13, 12, 16, 8, 9};
    int val;
    cout << "Enter the value to search: " << endl;
    cin >> val;

    bool found = search(arr, 10, val);

    if( found ){
        cout << "Value is found!";
    } else {
        cout << "Value not found :(";
    }
}