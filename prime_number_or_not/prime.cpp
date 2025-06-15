#include <iostream>
#include <cmath>

using namespace std;

int main(){
// find the prime number or not
    int n;
    int i=2;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=n-1){
        if(n%i==0){
            cout<<"Not a prime number";
            break;
        }
        i++;

    }
    if(i==n){
        cout<<"Prime number";
    }
    return 0;
}