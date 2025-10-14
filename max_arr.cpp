#include <iostream>
#include <climits>
using namespace std;

int max(int arr[], int n){
    int max = INT_MIN;
    
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    
    int num[100];
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;
    cout << "Enter values in array: " << endl;
    
    for(int i=0; i<size;i++){
        cin >> num[i];
    }
    
    cout << "Max value is: " << max(num, size);
    return 0;
}
