#include <iostream>
#include <vector>
using namespace std;

int main (){
int n = 7; // Size of the array
int arr[7]= {3,-4,5,4,-1,7,-8};

int maxSum = INT_MIN;
int currSum = 0;
for (int  i=0; i < n; i++) {
    currSum += arr[i];
    maxSum = max(maxSum, currSum);
    
    // Reset currSum if it becomes negative
    if (currSum < 0) {
        currSum = 0;
    }


}

cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;

}