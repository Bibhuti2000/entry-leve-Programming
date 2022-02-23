#include <iostream>

using namespace std;

void leftRotate(int arr[], int d, int n){
    while((d-1) >= 0 ){
        int temp = arr[0];
        for(int i = 0; i < n-1 ; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = temp;
        d--;
    }
}
void printArray(int arr[], int n){
    for( int i = 0 ; i < n ; i ++){
    std::cout << arr[i] << ", ";
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function calling
    leftRotate(arr, 2, n);
    printArray(arr, n);
 
    return 0;
}
