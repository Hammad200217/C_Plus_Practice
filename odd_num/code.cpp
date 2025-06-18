#include <iostream>
using namespace std;

int main() {

    int n; // Declare a variable to store the number of odd numbers
    cout<<"Enter the number of odd numbers you want to print;"<< endl;
    cin>> n; // Get the number of odd numbers from the user
    int count = 0; // Initialize a counter to keep track of how many odd numbers have been printed
    int num=1; // Start with the first odd number
    for (int i = 0; i < count; i++)
    {
    if(num%2 !=0)  
    {
        cout<< num << " "; // Print the odd number
        count++; // Increment the counter
    }
    

}
return 0;
}