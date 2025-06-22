#include <iostream>
using namespace std;
 int main (){
int nums[]={5, 3, 16, 20, 0};
int size = 5;
 int smallest = INT_MAX;
 int largest = INT_MIN;

 for(int i=0; i<size; i++) 
 {
   smallest= min(nums[i],smallest);
   largest = max(muns[i], largest);
   
 }
cout<< "Smallest value is "<< smallest<< endl;
cout<< "largest value is "<< largest <<endl;
    return 0;
 }