#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float p, r,t,simple_interest;
    cout <<"Enter the Principal amount: ";
    cin>>p;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"Enter the time period: ";
    cin>>t;
    simple_interest = (p*r*t)/100;
    cout<<"The simplest interest is :"<<simple_interest;
    return 0;
    }