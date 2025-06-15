#include <iostr
#include <stdio.h>
 using namespace std;

 int main(){

    int a;  // declare the variable to get number from user
    int sum; // declare the variable to store the sum of numbers
    cout << "Enter the number:"; 
    cin >> a; // get the number from user
    sum= a*(a+1/2); // calculate the sum of numbers from 1 to a
    cout << "The sum of numbers from 1 to " << a << " is: " << sum << endl;
 }