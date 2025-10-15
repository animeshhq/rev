#include <iostream>
using namespace std;

//trying forward declaration
int reverse(int arr[], int n);
void printArray(int arr[], int n);

int main(){

    int arr1[5] = {1, 2, 3, 4 ,5};
    int arr2[6] = { 11, 22, 33, 44, 55 , 66};
    
    reverse(arr1, 5);
    reverse(arr2, 6);

    printArray(arr1, 5);
    printArray(arr2, 6);

}

int reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}