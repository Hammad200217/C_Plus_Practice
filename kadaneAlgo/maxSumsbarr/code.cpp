#include <iostream>
#include <vector>
using namespace std;

int main (){
int n = 5; // Size of the array
int arr[5]= {1, 2, 3, 4, 5};

int maxSum = INT_MIN;
for(int st=0; st<n; st++){
for(int end=st; end<n; end++){

   int currSum = 0;
   for(int i=st; i<=end; i++){
       currSum += arr[i];
       maxSum = max(maxSum, currSum);
   }
   
}

}

cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;

}