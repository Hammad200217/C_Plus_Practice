#include <iostream>
#include <stdio.h>

using namespace std;
int main(){

    int n; // declare the variable to get number from user
    int sum=0; // declare the variable to store the sum of numbers
    int count=1; // declare the variable to count the numbers
    cout << "Enter the number:";
    cin >> n;
    while(count<=n){ // loop to calculate the sum of numbers from 1 to n
        sum+=count;
        count++;
    }
    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

}