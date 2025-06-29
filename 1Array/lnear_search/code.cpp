#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++)  {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {2, 4, 8, 10, 11, 12, 15};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 11;

    // Call the linearSearch function and print the result
    cout << linearSearch(arr, size, target) << endl;
    return 0;
}
