#include <iostream>
using namespace std;

int main (){

    int n;
    cout<<"Enter the number you want to check if it is prime or not: ";
    cin>>n; 
    for(int i=2; i<=n-1; i++){

        if(n%i==0){ // Check if n is divisible by i
            cout<<n<<" is not prime number"<<endl;
            return 0; // Exit the program if n is not prime
        }
        else{

            cout<<n<<" is a prime number"<<endl; // If n is not divisible by any i, it is prime
            return 0; // Exit the program after confirming n is prime
        }
    }

    return 0;
}